#include "main.h"
/**
 * main - Entry point
 * @ac: Argument count
 * @av: Argument vector
 * Return: 0 on success, 1 on error
 */
int main(int ac, char **av)
{
	int fd_from, fd_to, len;
	char buf[1024];

	if (ac != 3)
	{
		dprintf(2, "Usage: %s file_from file_to\n", av[0]);
		exit(97);
	}
	fd_from = open(av[1], O_RDONLY);
	if (fd_from == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);

	fd_to = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (fd_to == -1)
		dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);

	while ((len = read(fd_from, buf, 1024)) > 0)
	{
		if (write(fd_to, buf, len) != len)
			dprintf(2, "Error: Can't write to %s\n", av[2]), exit(99);
	}
	if (len == -1)
		dprintf(2, "Error: Can't read from file %s\n", av[1]), exit(98);
	if (close(fd_from) == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd_from), exit(100);
	if (close(fd_to) == -1)
		dprintf(2, "Error: Can't close fd %d\n", fd_to), exit(100);
	return (0);
}
