#include <stdlib.h>
#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t list.
 * @head: A pointer to the head of the list.
 * @index: The index of the node, starting from 0.
 *
 * Return: The nth node or NULL if it doesn't exist.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head != NULL)
	{
	if (count == index)
		return head;
	count++;
	head = head->next;
	}

	return NULL;
}