#include "main.h"
/**
 * swap_int - function that swaps the values of two integers
 * @a: the 1st parameter
 * @b: the 2scnd parameter
 * Return: return 0
 */
void swap_int(int *a, int *b)
{
	int d;

	d = *a;
	*a = *b;
	*b = d;
}
