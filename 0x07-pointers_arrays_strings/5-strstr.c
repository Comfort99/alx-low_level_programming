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
	while (*haystack != '\0')
	{
		if (*haystack == *needle)
		{
			char *haystack_ptr = haystack + 1;
			char *needle_ptr = needle + 1;

			while (*haystack_ptr != '\0' &&
					*needle_ptr != '\0' &&
					*haystack_ptr == *needle_ptr)
			{
				haystack_ptr++;
				needle_ptr++;
			}
			if (*needle_ptr == '\0')
			{
				return (haystack);
			}
		}
		haystack++;
	}
	return (0);
}
