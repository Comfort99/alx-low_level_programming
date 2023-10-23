#include "main.h"
#include <string.h>
/*
 * _strpn - Entry point
 * Descripion - function that gets the length of a prefix substring.
 * @s: pointer parameter
 * @accept: pointer parameter
 * Return: 0
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int j = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				i++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (j);
		}
		i++;
	}
	return (i);
}
