#include "hash_tables.h"

/**
 * hash_table_create - Creates a hash table.
 * @size: The size of the array.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new hash table.
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *th;
	unsigned long int j;

	th = malloc(sizeof(hash_table_t));
	if (th == NULL)
		return (NULL);

	th->size = size;
	th->array = malloc(sizeof(hash_node_t *) * size);
	if (th->array == NULL)
		return (NULL);
	for (j = 0; j < size; j++)
		th->array[j] = NULL;

	return (th);
}
