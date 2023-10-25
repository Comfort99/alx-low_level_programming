#include "main.h"
#include <math.h>
/**
 * is_prime_number -  function that returns 1 is a prime number
 * @n: int parameter
 * Return: result of a prime number
 */
int is_prime_number(int n)
{
	int i;

	if (n < 2)
	{
		return (0);
	}
	for (i = 2; i * i <= n; i++)
	{
		if (n % i == 0)
		{
			return (0);
		}
	}
	return (1);
}

