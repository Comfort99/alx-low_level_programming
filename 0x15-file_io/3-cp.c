#include "main.h"
/**
 * cp - A function that copies the content
 * of the file_from to file_to.
 * @file_from: The file to be copied from.
 * @file_to: The file to be copied to.
 * Return: 0 on success, 1 on failure.
 */
int cp(const char *file_from, const char *file_to)
{
	int fd_from, fd_to;
	int bytes_read;
	char buf[BUF_SIZE];

	fd_from = open(file_from, O_RDONLY);
	if (fd_from == -1)
	{
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		return (1);
	}
	fd_to = open(file_to, O_WRONLY | O_TRUNC, 0666);
	if (fd_to == -1)
	{
		close(fd_from);
		dprintf(2, "Error: Can't write to file %s\n", file_to);
		return (1);
	}
	while ((bytes_read = read(fd_from, buf, BUF_SIZE)) > 0)
	{
		if (write(fd_to, buf, bytes_read) != bytes_read)
		{
			close(fd_from);
			close(fd_to);
			dprintf(2, "Error: Can't write to file %s\n", file_to);
			return (1);
		}
	}
	if (bytes_read == -1)
	{
		close(fd_from);
		close(fd_to);
		dprintf(2, "Error: Can't read from file %s\n", file_from);
		return (1);
	}
	if (close(fd_from) == -1 || close(fd_to) == -1)
		dprintf(2, "Error: Can't close file descriptor %d\n",
				fd_from != -1 ? fd_from : fd_to);
	return (1);

	return (0);
}

/**
 * main - Entry point
 * @argc: The number of arguments.
 * @argv: The arguments.
 * Return: 0 on success, 1 on failure.
 */
int main(int argc, char **argv)
{
	if (argc != 3)
	{
		dprintf(2, "Usage: cp file_from file_to\n");
		return (97);
	}
	if (cp(argv[1], argv[2]) == 1)
	{
		return (99);
	}
	return (0);
}
