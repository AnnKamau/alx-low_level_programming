#include "search_algos.h"

/**
 * jump_search - Searches for a value in sorted array of integers.
 * @array: A pointer to the first elements of the array to search.
 * @size: The number of elements in the array.
 * @value: The value to search for.
 * Return: if the value is not present or NULL, -1.
 * 	else, the first index where value is located.
 */
int jump_search(int *array, size_t size, int value)
{
	size_t j, jmp, stp;

	if (array == NULL || size == 0)
		return (-1);

	stp = sqrt(size);
	for (j = jmp =0; jmp < size && array[jmp] < value;)
	{
		printf("Value checked array[%ld] = [%d]\n", jmp, array[jmp]);
		j = jmp;
		jmp += stp;
	}

	printf("Value found between indexes [%ld] and [%ld]\n", j, jmp);

	jmp = jmp < size - 1 ? jmp : size - 1;
	for (; j < jmp && array[i] < value; j++)
		printf("Value checked array[%ld] = [%d]\n", j, array[j]);
	printf("Value checked array[%ld] = [%d]\n", j, array[j]);

	return (array[j] == value ? (int)j : -1);
}
