#include "main.h"
#include <string.h>
/**
 * _strlen_recursion -  function that returns the length of a string.
 * @s: a pointer parameter
 * Return: 0 or 1
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	else
	{
		return (1 + _strlen_recursion(s + 1));
	}
}
