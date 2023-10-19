#include "main.h"
/**
 * main - entry point
 * reverse_array - function that reverses the content of an array of integers
 * @a: a pointer parameter
 * @n: a int parameter
 */
void reverse_array(int *a, int n)
{
	int i;
	int j;
	int c;

	for (i = 0, j = n - 1; i < j; i++, j--)
	{
		c = a[i];
		a[i] = a[j];
		a[j] = c;
	}
}
