#include "search_algos.h"

/**
 * linear_search - Linearly search for a number in an array.
 * @array: Pointer to the first element of the array to search.
 * @size: Number of elements of the array to search in.
 * @value: Target value to search for.
 *
 * Return: The index where the value is located, or -1 if not found.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}
