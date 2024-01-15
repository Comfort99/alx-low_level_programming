#include "main.h"
/**
 * *_strcpy -function that copies the string pointed to by src
 * @dest : function parameter
 * @src : function parameter
 * Return: always 0
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	dest[i] = '\0';
	return (dest);
}
