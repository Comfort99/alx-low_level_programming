#include "main.h"
/**
 * rot13 -  function that encodes a string
 * @string: a pointer parameter
 * Return: string
 */
char *rot13(char *string)
{
	int i = 0, j = 0, k;
	char b[52] = {"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz"};
	char n[52] = {"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm"};

	for (i = 0; string[i] != '\0'; i++)
	{
		k = 0;
		for (j = 0; j < 52; j++, k++)
		{
			if (string[i] == b[j])
			{
				string[i] = n[k];
				break;
			}
		}
	}
	return (string);
}
