#include "search_algos.h"
/**
 * binary_search -  function that searches for a
 * value in a sorted array of integers
 * @array: pointer to the first element of the array
 * @size: number of elements in array
 * Return: Index on success else -1
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	if (array == NULL)
	{
		return (-1);
	}

	while (low <= high)
	{
		mid = low + (high - low) / 2;
		if (array[mid] == value)
		{
			return (mid);
		}
		if (array[mid] > value)
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return (-1);
}
