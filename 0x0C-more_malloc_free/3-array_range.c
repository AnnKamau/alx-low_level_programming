#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * array_range - function that creates an array of integers
 * @min: the minimum value
 * @max: the maximum value
 * Return: pointer to the new array, NULL on failure
 */

int *array_range(int min, int max)
{
	int *q;
	int h, len;

	if (min > max)
		return (NULL);

	len = max - min + 1;

	q = malloc(sizeof(int) * len);

	if (q == NULL)
		return (NULL);

	for (h = 0; h < len; h++)
		q[h] = min + h;

	return (q);
}
