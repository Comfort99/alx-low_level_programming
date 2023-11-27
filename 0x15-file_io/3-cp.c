#include "main.h"
/**
 * check_IO_stat - function that checks the access permissions of a file
 * @stat: file descriptor
 * @filename: name of a file
 * @mode: closing or opening
 * @fd: file descriptor
 */
void check_IO_stat(int stat, int fd, char *filename, char mode)
{
	if (mode == 'C' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
	else if (mode == 'O' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		exit(98);
	}
	else if (mode == 'W' && stat == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(99);
	}
}

/**
 * main - function to copy content of one file to another
 * @arg: arguments
 * @argv: arguments passed
 * Return: 1 on success, terminate otherwise
 */
int main(int arg, char *argv[])
{
	int fd_from, fd_to, len;
	char buffer[1024];

	if (arg != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	fd_from = open(argv[1], O_RDONLY);
	check_IO_stat(fd_from, -1, argv[1], 'O');
	fd_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	check_IO_stat(fd_to, -1, argv[2], 'W');
	while ((len = read(fd_from, buffer, sizeof(buffer))) > 0)
	{
		if (write(fd_to, buffer, len) != len)
			check_IO_stat(-1, -1, argv[2], 'W');
	}
	if (len == -1)
		check_IO_stat(-1, -1, argv[1], 'O');
	if (close(fd_from) == -1)
		check_IO_stat(-1, fd_from, NULL, 'C');
	if (close(fd_to) == -1)
		check_IO_stat(-1, fd_to, NULL, 'C');
	return (0);
}
