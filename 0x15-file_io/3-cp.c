#include "main.h"
/**
 * main - Copies the contents of a file to another file.
 * @ac: The number of arguments
 * @av: An array of pointers to the arguments
 * Return: 0 on success
 */
int main(int ac, char *av[])
{
	int from, to, r, w;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(av[2]);
	from = open(av[1], O_RDONLY);
	r = read(from, buffer, 1024);
	to = open(av[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (from == -1 || r == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
			free(buffer);
			exit(98);
		}
		w = write(to, buffer, r);
		if (to == -1 || w == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
			free(buffer);
			exit(99);
		}
		r = read(from, buffer, 1024);
		to = open(av[2], O_WRONLY | O_APPEND);
	} while (r > 0);
	free(buffer);
	close_file(from);
	close_file(to);

	return (0);
}
/**
 * create_buffer - Allocates a buffer
 * @file: The name of the file buffer
 * Return: A pointer to the newly-allocated buffer
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);

	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}
/**
 * close_file - Closes file
 * @o: The file to be closed
 */
void close_file(int o)
{
	int c;

	c = close(o);

	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", o);
		exit(100);
	}
}
