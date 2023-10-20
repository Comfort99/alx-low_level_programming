#include "main.h"
/**
 * rot13 -  function that encodes a string
 * @string: a pointer parameter
 * Return: string
 */
char *rot13(char *string)
{
	int i, j;

	for (i = 0; string[i] != '\0'; i++)
	{
		if (string[i] >= 'a' && string[i] <= 'z')
		{
			string[i] = ((string[i] - 'a') + 13) % 26 + 'a';
		}
		else if (string[i] >= 'A' && string[i] <= 'Z')
		{
			string[i] = ((string[i] - 'A') + 13) % 26 + 'A';
		}
	}
	for (j = 0; string[j] != '\0'; j++)
	{
		if (string[j] < 'a' || string[j] > 'z')
		{
			string[j] = string[j];
		}
	}
	return (string);
}
