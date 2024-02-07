#include "search_algos.h"

/**
 * binary_search - Searches for a value in a sorted array of integers
 * @array: A pointer to first elements of array to search
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: if value is not present or NULL, -1.
 * 	else, the index where the value is located.
 */
int binary_search(int *array, size_t size, int value)
{
	size_t j, east, west;

	if (array == NULL)
		return (-1);

	for (east = 0, west = size - 1; west >= east;)
	{
		printf("Searching in array: ");
		for (j = east; j < west; j++)
			printf("%d, ", array[j]);
		printf("%d\n", array[j]);

		j = east + (west - east) / 2;
		if (array[j] == value)
			return (j);
		if (array[j] > value)
			west = j - 1;
		else
			east = j + 1;
	}
	return (-1);
}
