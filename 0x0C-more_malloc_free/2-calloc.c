#include "main.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * _calloc - function that allocates memory for an array
 * @nmemb: the array
 * @size: size of the memory
 * Return: NULL when fail, a pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int k, total;

	if (nmemb == 0 || size == 0)
		return (NULL);

	total = nmemb * size;

	p = malloc(total);

	if (p == NULL)
		return (NULL);

	for (k = 0; k < total; k++)
		p[k] = 0;

	return ((void *)p);
}
