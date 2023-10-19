#include "main.h"
/**
 * _strcat - function that concatenates two strings
 * @dest: a parameter of a function
 * @src: a parameter of a function
 * Return: return dest
 */
char *_strcat(char *dest, char *src)
{
	int i = 0;
	int  a = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[a] != '\0')
	{
		dest[i++] = src[a++];
	}
	dest[i] = 0;
	return (dest);
}
