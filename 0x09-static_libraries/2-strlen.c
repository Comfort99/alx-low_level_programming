#include "main.h"
/**
 * _strlen - function that returns the length of a string
 * @s: parameter of the function
 * Return: return the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
