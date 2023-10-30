#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - function that returns a pointer to a newly allocated space
 * @str: a pointerr parameter used to store
 * Return: return 0
 */
char *_strdup(char *str)
{
	char *new_str;

	if (str == NULL)
	{
		return (NULL);
	}
	new_str = malloc(strlen(str) + 1);

	if (new_str != NULL)
	{
		strcpy(new_str, str);
	}
	return (new_str);
}
