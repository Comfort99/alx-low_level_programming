#include "main.h"
/**
 * print_rev - function that prints a string in reverse
 * @s: parameter to count backward
 */
void print_rev(char *s)
{
	char c;
	int length = 0;
	int i;

	while (*s != '\0')
	{
		length++;
		s++;
	}

	s--;

	for (i = 0; i < length / 2; i++)
	{
		c = s[i];
		s[i] = s[length -i -1];
		s[length -i -1] = c;
	}
}
