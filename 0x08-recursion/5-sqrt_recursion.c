#include "main.h"
#include <math.h>
/**
 * sqrt_check - function checks if the square of i is equal to n
 * @n: int parameter
 * @i: int parameter
 * Return: result of sqaure
 */
int sqrt_check(int n, int i)
{
	if (i * i == n)
	{
		return (i);
	}
	else if (i * i > n)
	{
		return (-1);
	}
	return (sqrt_check(n, i + 1));
}
/**
 * _sqrt_recursion -  function that returns the natural square root
 * @n: int parameter
 * Return: square root of n
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (sqrt_check(n, 1));
}

