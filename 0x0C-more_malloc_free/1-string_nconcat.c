#include "main.h"
#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @s1: parameter to be checked
 * @s2: parameter to be checked
 * @n: loop counter
 * Return: string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat_str;
	unsigned int len_s1 = 0, len_s2 = 0;

	if (s1 != NULL)
		len_s1 = strlen(s1);
	if (s2 != NULL)
		len_s2 = strlen(s2);

	if (n >= len_s2)
		n = len_s2;
	concat_str = malloc(sizeof(char) * (len_s1 + n + 1));
	if (concat_str == NULL)
		return (NULL);

	if (s1 != NULL)
		strcpy(concat_str, s1);
	if (s2 != NULL)
		strncpy(concat_str + len_s1, s2, n);

	concat_str[len_s1 + n] = '\0';
	return (concat_str);
}
