#include "main.h"
/**
 * _abs -function that computes absolute values of an integer
 * @a: parameter to be checked
 * Description : This function returns absolute value of a number
 * Return: -a or a
 */
int _abs(int a)
{
	if (a <= 0)
	{
		return (-a);
	}
	else
	{
		return (a);
	}
}
