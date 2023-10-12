#include "main.h"
/**
 * print_most_numbers -function that prints the numbers
 * Return: return void
 */

void print_most_numbers(void)
{
	int b;

	for (b = 0; b < 10; b++)
	{
		if (b != 2 && b != 4)
		_putchar(b + '0');
	}
	_putchar('\n');
}
