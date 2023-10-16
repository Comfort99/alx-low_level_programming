#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: parameter to count backward
 */
void print_rev(char *s)
{
	char *end = s;

	while (*end != '\0')
	{
		end++;
	}
	while (end != s)
	{
		_putchar(*end);
		end--;
	}
}
