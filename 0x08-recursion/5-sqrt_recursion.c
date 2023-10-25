#include "main.h"
#include <math.h>
/**
 * _sqrt_recursion - function that returns the natural square root of a number.
 * @n: int parameter
 * Return: sqaure root of x
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0 || n == 1)
	{
		return (n);
	}
	else
	{
		int low = 1;
		int high = n;

		while (low <= high)
		{
			int mid = (low + high) / 2;

			if (mid * mid == n)
			{
				return (mid);
			}
			else if (mid * mid < n)
			{
				low = mid + 1;
			}
			else
			{
				high = mid - 1;
			}
		}
		return (-1);
	}
}
