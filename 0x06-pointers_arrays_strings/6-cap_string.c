#include "main.h"
/**
 * cap_string - function that capitalizes all words of a string
 * @p: a pointer parameter
 * Return: pointer p
 */
char *cap_string(char *p)
{
	int i = 0;

	for (; p[i] != '\0'; i++)
	{
		if (p[0] >= 97 && p[0] <= 122)
		{
			p[0] = p[0] - 32;
		}
	if (p[i] == ' ' || p[i] == ',' || p[i] == '\n' ||
	p[i] == '\t' || p[i] == ';' || p[i] == '.' || p[i] == '!'
	|| p[i] == '?' || p[i] == '"' || p[i] == '(' || p[i] == ')' ||
	p[i] == '{' || p[i] == '}')
		{
		if (p[i + 1] >= 97 && p[i + 1] <= 122)
		{
			p[i + 1] = p[i + 1] - 32;
		}
		}
	}
	return (p);
}
