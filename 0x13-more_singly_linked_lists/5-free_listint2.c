#include "lists.h"

/**
 * free_listint2 - function that frees a listint_t list.
 * @head: pointer to a pointer to a head of the list
 */

void free_listint2(listint_t **head)
{
	listint_t *piper = 0;

	if (head == NULL)
		return;

	while (*head != NULL)
	{
		piper = *head;
		*head = (*head)->next;
		free(piper);
	}
	*head = NULL;
}
