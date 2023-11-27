#include "main.h"
/**
 * copy_file - Copies the content of one file to another.
 * @from: The source file.
 * @to: The destination file.
 * Return: 0 on success, -1 on failure.
 */
int copy_file(const char *from, const char *to);
/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to close.
 * @filename: The name of the file associated with the descriptor.
 * Return: 0 on success, -1 on failure.
 */
int close_file(int fd, const char *filename);
/**
 * main - Entry point
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0 on success, 1 on error
 */
int main(int ac, char **av)
{
	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		return (97);
	}
	if (copy_file(av[1], av[2]) == -1)
		return (1);
	return (0);
}
/**
 * copy_file - Copies the content of one file to another.
 * @from: The source file.
 * @to: The destination file.
 * Return: 0 on success, -1 on failure.
 */
int copy_file(const char *from, const char *to)
{
	int fd_from, fd_to, len;
	char buf[1024];

	fd_from = open(from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", from);
		return (close_file(fd_from, NULL) == -1 ? -1 : 98);
	}
	fd_to = open(to, O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
	{
		dprintf(2, "Error: Can't write to %s\n", to);
		if (close_file(fd_from, from) == -1)
			return (-1);
		return (99);
	}
	while ((len = read(fd_from, buf, 1024)) > 0)
	{
		if (write(fd_to, buf, len) != len)
		{
			dprintf(2, "Error: Can't write to %s\n", to);
			if (close_file(fd_from, from) == -1 || close_file(fd_to, to) == -1)
				return (-1);
			return (99);
		}
	}
	if (len == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", from);
		if (close_file(fd_from, from) == -1 || close_file(fd_to, to) == -1)
			return (-1);
		return (98);
	}
	if (close_file(fd_from, from) == -1 || close_file(fd_to, to) == -1)
		return (-1);
	return (0);
}
/**
 * close_file - Closes a file descriptor.
 * @fd: The file descriptor to close.
 * @filename: The name of the file associated with the descriptor.
 * Return: 0 on success, -1 on failure.
 */
int close_file(int fd, const char *filename)
{
	if (close(fd) == -1)
	{
		if (filename != NULL)
			dprintf(2, "Error: Can't close fd for file %s\n", filename);
		else
			dprintf(2, "Error: Can't close fd\n");
		return (-1);
	}
	return (0);
}
