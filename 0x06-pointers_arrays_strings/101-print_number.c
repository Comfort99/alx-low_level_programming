#include "main.h"
/**
 * print_number - function that prints an integer
 * @n: a parameter of a function
 */
void print_number(int n)
{
		unsigned int x;

		x = n;
		if (n < 0)
		{
			_putchar ('-');
			x = -n;
		}
		if (x / 10 != 0)
		{
			print_number(x / 10);
		}
		_putchar((x % 10) + '0');
		/**
		 *if (n > 999)
		*{
			*_putchar((n / 1000) + '0');
			*_putchar((n / 100) % 10 + '0');
			*_putchar((n / 10) % 10 + '0');
			*_putchar((n % 10) + '0');
		*}
		*else if (n > 99)
		*{
			*_putchar((n / 100) + '0');
			*_putchar((n / 10) % 10 + '0');
			*_putchar((n % 10) + '0');
		*}
		*else if (n > 9)
		*{
			*_putchar((n / 10) + '0');
			*_putchar((n % 10) + '0');
		*}
		*else
		*{
			*_putchar(n + '0');
		*}
		 */
}
