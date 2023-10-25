#include "main.h"
/**
 * factorial - function that returns the factorial of a given number.
 * @n: int parameter
 * Return: -1,1 or result
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		int result = 1;
		int i = 1;

		for (; i <= n; i++)
		{
			result *= i;
		}
		return (result);
	}
}
