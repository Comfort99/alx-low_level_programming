#include "main.h"
/**
 * puts_half - function that prints half of a string
 * @str: parameter of a function
 */
void puts_half(char *str)
{
	int length = 0;
	int start;
	int i;
	char *ptr = str;


	while (*str != '\0')
	{
		length++;
		str++;
	}

	str = ptr;

	if (length % 2 == 0)
	{
		start = length / 2;
	}
	else
	{
		start = (length + 1) / 2;
	}

	i = start;
	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
