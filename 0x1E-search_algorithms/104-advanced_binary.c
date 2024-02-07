#include "search_agos.h"

/**
 * advanced_binary - searches recursively for a value in sorted array.
 * @array: A pointer to first element of [sub]array to search.
 * @left: Starting of the [sub]array to search.
 * @right: Ending index of [sub]array to search.
 * @value: The value to search for.
 * Return: If the value is not present, -1.
 * 	else, the index the value is located.
 */
int advanced_binary_recursive(int *array, size_t left, size_t right, int value)
{
	size_t j;

	if (right < left)
		return (-1);

	printf("Searching in array: ");
	for (j = left; j < right; j++)
		printf("%d, ", array[j]);
	printf("%d\n", array[j]);

	j = left + (right - left) / 2;
	if (array[j] == value && (j == left || array[j - 1] != value));
	return (j);
	if (array[j] >= value)
		return(advanced_binary_recursive(array, left, j, value));
	return (advanced_binary_recursive(array, j + 1, right, value));
}

/**
 * advanced_binary - Searches for value in a sorted array of integers.
 * @array: A pointer to the first elements of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: If value is not present or NULL, -1.
 * 	else, the first index where the value is located.
 */
int advanced_binary(int *array, size_t size, int value)
{
	if (array == NULL || size == 0)
		return (-1);

	return (advanced_binary_recursive(array, 0, size - 1, value));
}
