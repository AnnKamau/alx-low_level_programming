#include "lists.h"

/**
 * listint_len - returns the number of elements in a linked listint_t list
 * @h: pointer to the header of the  list
 * Return: Number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t heel = 0;

	while (h != NULL)
	{
		h = h->next;
		heel++;
	}
	return (heel);
}
