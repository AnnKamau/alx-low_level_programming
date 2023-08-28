#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at a given  index
 * @head: pointer to a pointer to head of a list
 * @index: the index of the node
 * Return: 1 on success, -1 on failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *light, *super;
	unsigned int p;

	if (head == NULL || *head == NULL)
		return (-1);

	if (index == 0)
	{
		super = *head;
		*head = (*head)->next;
		free(super);
		return (1);
	}

	light = *head;

	for (p = 0; p < index - 1 && light != NULL; p++)
	{
		light = light->next;
	}
	if (light == NULL || light->next == NULL)
		return (-1);

	super = light->next;
	light->next = super->next;
	free(super);

	return (1);
}
