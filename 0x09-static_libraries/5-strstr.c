#include "main.h"
#include <string.h>
/**
 * _strstr - function that locates a substring
 * @haystack: a pointer parameter
 * @needle: a pointer parameter
 * Return: returns a pointer to the beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}
		if (*two == '\0')
			return (haystack);
	}
	return ('\0');
}
