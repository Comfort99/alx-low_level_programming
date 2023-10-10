#include "main.h"

/**
 * _print_alphabet - prints the alphabe, in lowercase, followed by a new line
 * return: 0
 */
void_ print_alphabet(void)
{
	char i;

	for (i = 'a'; i <= 'z' ; i++)
		_putchar(i);
	_putchar('\n');
}
