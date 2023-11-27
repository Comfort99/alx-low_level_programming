#include "main.h"
/**
 * check_IO_stat - function that checks the access permissions of a file
 * @stat: file descriptor
 * @fd: file descriptor
 * @filename: name of a file
 * @mode: closing or opening
 */
void check_IO_stat(int stat, int fd, const char *filename, char mode)
{
	if (stat == -1)
	{
		if (mode == 'C')
			dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		else if (mode == 'O')
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", filename);
		else if (mode == 'W')
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", filename);
		exit(100);
	}
}

/**
 * main - function to copy content of one file to another
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, terminate otherwise
 */
int main(int argc, char *argv[])
{
	int src_fd, dest_fd, n_read, n_written;
	char buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}
	src_fd = open(argv[1], O_RDONLY);
	check_IO_stat(src_fd, -1, argv[1], 'O');
	dest_fd = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, S_IRUSR
			| S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH);
	check_IO_stat(dest_fd, -1, argv[2], 'W');
	while ((n_read = read(src_fd, buffer, sizeof(buffer))) > 0)
	{
		n_written = write(dest_fd, buffer, n_read);
		check_IO_stat(n_written, -1, argv[2], 'W');
	}
	check_IO_stat(n_read, -1, argv[1], 'O');
	check_IO_stat(close(src_fd), src_fd, NULL, 'C');
	check_IO_stat(close(dest_fd), dest_fd, NULL, 'C');
	return (0);
}
