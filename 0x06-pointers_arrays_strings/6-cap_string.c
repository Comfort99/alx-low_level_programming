#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @c: a pointer parameter
 * Return: pointer c
 */
char *cap_string(char *c)
{
	int i = 0;

	while (c[i] != '\0')
	{
		if (c[0] >= 97 && c[0] <= 122)
		{
			c[0] = c[0] -32;
		}
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
		{
			if (c[i + 1] >= 97 && c[i + 1] <= 122)
			{
				c[i + 1] = c[i + 1] - 32;
			}
		}
		i++;
	}
	return (c);
}
