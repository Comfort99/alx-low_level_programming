#include "main.h"
/**
 * _strncat - function that concatenates two strings
 * @dest:a pointer parameter of a function
 * @src: a pointer parameter of a function
 * @n: an int parameter of a function
 * Return: return dest 
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0;
	int j = 0;

	while (i < n && src[i] != '\0')
	{
		dest[j++] = src[i++];
	}
	dest[j] = '\0';
	return dest;
}
