#include "function_pointers.h"

/**
 * int_index - search for an integer
 * @array: an array
 * @size: size of the elements
 * @cmp: pointer to the function
 * Return: -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int j;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);

	for (j = 0; j < size; j++)
	{
		if (cmp(array[j]))
			return (j);
	}
	return (-1);
}
