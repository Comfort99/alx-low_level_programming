#include "main.h"
/**
 * _isupper - function that checks for uppercase character
 * @c: parameter to be checked
 * Return: 1 if is upper case
 */
int _isupper(int c)
{
	if (c > 'A' && c < 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
