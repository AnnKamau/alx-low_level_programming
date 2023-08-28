#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list
 * @head: pointer to a pointer to the head of the list
 * @index: index of the new node
 * Return: node does not exist, return NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int l = 0;

	while (head != NULL)
	{
		if (l == index)
			return (head);

		head = head->next;
		l++;
	}
	return (NULL);
}
