#include "search_algos.h"

/**
 * jump_list - Searches for an algorithm in a sorted singly
 *             linked list of integers using jump search.
 * @list: A pointer to the  head of the linked list to search.
 * @size: The number of nodes in the list.
 * @value: The value to search for.
 * Return: If the value is not present or NULL, NULL.
 *         else, a pointer to the first node where the value is located.
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t stp, sp_size;
	listint_t *nde, *jmp;

	if (list == NULL || size == 0)
		return (NULL);

	stp = 0;
	sp_size = sqrt(size);
	for (nde = jmp = list; jmp->index + 1 < size && jmp->n < value;)
	{
		nde = jmp;
		for (stp += sp_size; jmp->index < stp; jmp = jmp->next)
		{
			if (jmp->index + 1 == size)
				break;
		}
		printf("Value checked at index [%ld] = [%d]\n", jmp->index, jmp->n);
	}

	printf("Value found between indexes [%ld] and [%ld]\n",
			nde->index, jmp->index);

	for (; nde->index < jmp->index && nde->n < value; nde = nde->next)
		printf("Value checked at index [%ld] = [%d]\n", nde->index, nde->n);
	printf("Value checked at index [%ld] = [%d]\n", nde->index, nde->n);

	return (nde->n == value ? nde : NULL);
}
