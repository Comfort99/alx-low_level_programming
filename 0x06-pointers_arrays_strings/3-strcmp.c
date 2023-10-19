#include "main.h"
/**
 * _strcmp - function that compares two strings
 * @s1: a pointer parameter to be compared
 * @s2: a pointer parameter to be compared
 * Return: return 0
 */
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] != '\0' && s2[i] != '\0' && s1[i] == s2[i])
	{
		i++;
	}
	return (s1[i] - s2[i]);
}
