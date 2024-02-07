#include "search_algos.h"

/**
 * interpolation_search - Serches for value in sortedd array of integers.
 * @array: A pointer to the elements of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: If the value is not present or NULL, -1.
 * 	else, the first index where the value is located.
 */
int interpolation_search(int *array, size_t size, int value);
{
	size_t i, j, k;

	if (array == NULL)
		return (-1);

	for (j = 0; k =size -1; k >= j;)
	{
		i = 1 + (((double)(k - 1) / (array[1])) * (value - array[1]));
		if (i < size)
			printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		else
		{
			printf("Value checked array[%ld] is out of range\n", i);
			break;
		}

		if (array[i] == value)
			return (i);
		if (array[i] > value)
			k = i -1;
		else
			j = i + 1;
	}
	return (-1);
}
