#include "lists.h"

/**
 * reverse_listint - reverses a listint_t list
 * @head: pointer to the pointer to the head of list
 * Return: pointer to the first node
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *previous = NULL, *new_nodes;

	while (*head != NULL)
	{
		new_nodes = (*head)->next;
		(*head)->next = previous;

		previous = *head;
		*head = new_nodes;
	}
	*head = previous;

	return (previous);
}
