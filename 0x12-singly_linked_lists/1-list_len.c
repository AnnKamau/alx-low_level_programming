#include "lists.h"

/**
 * list_len - returns the number of elements in a linked list_t list
 * @h: pointer to the head of the list
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t counts = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		counts++;
		current = current->next;
	}
	return (counts);
}
