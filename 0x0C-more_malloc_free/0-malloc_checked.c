#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - function that allocates memory using malloc
 * @b: size of memory
 * Return: memory allocation
 */
void *malloc_checked(unsigned int b)
{
	int *output;

	output = malloc(b);
	if (output == NULL)
		exit(98);
	else
		return (output);
}
