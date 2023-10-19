#include "main.h"
/**
 * _strncpy - function that copies a string
 * @dest: a pointer parameter of a function
 * @src: a pointer parameter of a function
 * @n: a pointer parameter
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i = 0;

	while (i < n && src[i] != '\0')
	{
		i++;
		dest[i] = src[i];
	}
	if (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
