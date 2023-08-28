#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: pointer to a pointer to the head of the list
 * @n: storage for the new node
 * Return: address of the new node, NULL on failure
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_nodes;
	listint_t *last;

	new_nodes = malloc(sizeof(listint_t));
	if (new_nodes == NULL)
		return (NULL);

	new_nodes->n = n;
	new_nodes->next = NULL;

	if (*head == NULL)
		*head = new_nodes;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;

		last->next = new_nodes;
	}
	return (new_nodes);
}
