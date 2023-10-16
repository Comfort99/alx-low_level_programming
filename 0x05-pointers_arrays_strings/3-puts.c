#include "main.h"
/**
 * _puts - function that prints a string
 * @str: parameter of a string line
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
