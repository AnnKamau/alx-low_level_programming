#include "search_algos.h"

/**
 * linear_skip - Searches for an algorithm in a sorted singly
 *               linked list of integers using linear skip.
 * @list: A pointer to the  head of the linked list to search.
 * @value: The value to search for.
 *
 * Return: If the value is not present or NULL, NULL.
 *         else, a pointer to the first node where the value is located.
 */
skiplist_t *linear_skip(skiplist_t *list, int value)
{
	skiplist_t *nde, *jmp;

	if (list == NULL)
		return (NULL);

	for (nde = jmp = list; jmp->next != NULL && jmp->n < value;)
	{
		nde = jmp;
		if (jmp->express != NULL)
		{
			jmp = jmp->express;
			printf("Value checked at index [%ld] = [%d]\n",
					jmp->index, jmp->n);
		}
		else
		{
			while (jmp->next != NULL)
				jmp = jmp->next;
		}
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			nde->index, jmp->index);

	for (; nde->index < jmp->index && nde->n < value; nde = nde->next)
		printf("Value checked at index [%ld] = [%d]\n", nde->index, nde->n);
	printf("Value checked at index [%ld] = [%d]\n", nde->index, nde->n);

	return (nde->n == value ? nde : NULL);
}
