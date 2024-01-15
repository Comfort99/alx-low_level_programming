#include "main.h"
#include <string.h>
/**
 * _strspn -function that gets the length of a prefix substring.
 * @s: pointer parameter
 * @accept: pointer parameter
 * Return: return number of characters in strings
 */
unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

