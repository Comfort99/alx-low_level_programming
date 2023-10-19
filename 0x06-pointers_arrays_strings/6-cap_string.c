#include "main.h"
#include <ctype.h>
/**
 * cap_string - function that capitalizes all words of a string
 * @c: a pointer parameter
 * Return: 0
 */
char *cap_string(char *c)
{
	int i = 0;

	while (c[i])
	{
		while (!(c[i] >= 'a' && c[i] <= 'z') && c[i] != '\0')
			i++;

		if (c[i - 1] == ' ' ||
				c[i - 1] == '\n' ||
				c[i - 1] == '\t' ||
				c[i - 1] == ';' ||
				c[i - 1] == '?' ||
				c[i - 1] == '(' ||
				c[i - 1] == ')' ||
				c[i - 1] == '{' ||
				c[i - 1] == '}' ||
				c[i - 1] == '!' ||
				c[i - 1] == '.' ||
				c[i - 1] == ',' ||
				c[i - 1] == '"' ||
				c == 0)
			c[i] = toupper(c[i]);
		i++;
	}
	return (c);
}
