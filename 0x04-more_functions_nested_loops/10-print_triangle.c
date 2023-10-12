#include "main.h"
/**
 * print_triangle - function that prints a triangle, followed by a new line
 * @size: parameter of ther function
 * Return: return 0
 */

void print_triangle(int size)
{
	int hash, index, x;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (index = 0; index <= (size - 1); index++)
		{
			for (hash = 0; hash < (size - 1) - index; hash++)
			{
				_putchar(' ');
			}
			for (x = 0; x <= index; x++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
}
