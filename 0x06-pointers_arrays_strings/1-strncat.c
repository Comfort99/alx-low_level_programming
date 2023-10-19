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
	int i;
	int len = strlen(dest);

	while (i = 0; i < n && *src != '\0'; i++)
	{
		dest[len + i] = *src;
		src++;
	}
	dest[len + i] = '\0';
	return dest;
}
