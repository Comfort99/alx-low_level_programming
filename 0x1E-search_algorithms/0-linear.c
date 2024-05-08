#include "search_algos.h"
/**
 * linear_search - function that searches for a value in an array of integers
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: value to search for
 * Return: return index on success else -1
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	while (i < size)
	{
		if (array[i] == value)
		{
			return (i);
		}
		i++;
	}
	return (-1);
}
