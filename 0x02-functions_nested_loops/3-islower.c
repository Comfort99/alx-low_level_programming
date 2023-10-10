#include "main.h"
/**
 * _islower - is a fnction that checks lowercase characters
 * @a : parameter to be checked
 * Return : 1 or 0
 */
int _islower(int a)
{
	if (a >= 'a' && a <= 'z')
		return (1);
	else
		return (0);
}
