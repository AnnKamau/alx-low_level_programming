#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _realloc - reallocates a memory block
 * @ptr: pointer memory previously in malloc
 * @old_size: the size in bytes allocated in ptr
 * @new_size: the new size in bytes of the new block of memory
 * Return: pointer to new block, NULL on failure
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *w;
	char *old_ptr;
	unsigned int j, min;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	w = malloc(new_size);

	if (w == NULL)
		return (NULL);

	old_ptr = (char *)ptr;

	min = old_size < new_size ? old_size : new_size;

	for (j = 0; j < min; j++)
		w[j] = old_ptr[j];

	free(ptr);

	return ((void *)w);
}
