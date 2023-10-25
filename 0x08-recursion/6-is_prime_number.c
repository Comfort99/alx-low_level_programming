#include "main.h"
#include <math.h>
/**
 * prime_a -  function calculates a prime
 * @a: int parameter
 * @b: int parameter
 * Return: return 0
 */
int prime_a(int a, int b)
{
	if (a <= 1 || (a != b && a % b == 0))
	{
		return (0);
	}
	else if (a == b)
	{
		return (1);
	}
	return (prime_a(a, b + 1));
}
/**
 * is_prime_number - function that returns 1 if is a prime number
 * @n: int parameter
 * Return: return 0 or 1
 */
int is_prime_number(int n)
{
	return (prime_a(n, 2));
}
