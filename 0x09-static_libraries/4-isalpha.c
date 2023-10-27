#include "main.h"

/**
 * _isalpha - will output one if the input is a letter
 *
 * @c: character in ASCII
 *
 * Return: 1 for letters
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
