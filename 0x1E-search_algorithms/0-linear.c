#include "search_algos.h"

/**
 * linear_search - Searches for a value in an array of integers
 * @array: A pointer to first element of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: if value is not present or NULL, -1.
 * 	  else, the index where the value is located.
 */
int linear_search(int *array, size_t size, int value)
{
	size_t j;

	if (array == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
		if (array[j] == value)
			return (j);
	}

	return (-1);
}
