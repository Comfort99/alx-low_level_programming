#include "main.h"
#include <stdlib.h>
/**
 * array_range - function that creates an array of integers.
 * @min: parameter to be compared
 * @max: parameter to be compared
 * Return: pointer
 */
int *array_range(int min, int max)
{
	int i;
	int *array;

	if (min > max)
	{
		return (NULL);
	}
	array = malloc(sizeof(int) * (max - min + 1));

	if (!array)
	{
		return (NULL);
	}
	for (i = 0; min <= max; i++, min++)
	{
		array[i] = min;
	}
	return (array);
}
