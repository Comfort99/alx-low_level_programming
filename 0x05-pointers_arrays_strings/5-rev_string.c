#include "main.h"
/**
 *  rev_string -  function that reverses a string
 *  @s: parametere to reversed
 */
void rev_string(char *s)
{
	int length = 0;
	char c;
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		length++;
	}
	for (i = 0; i < length / 2 ; i++)
	{
		c = s[i];
		s[i] = s[length - i - 1];
		s[length - i - 1] = c;
	}
}
