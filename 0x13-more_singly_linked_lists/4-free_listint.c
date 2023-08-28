#include "lists.h"

/**
 * free_listint - frees a listint_t list
 * @head: pointer to the pointer of the head of the list
 */

void free_listint(listint_t *head)
{
	listint_t *lie;

	while (head != NULL)
	{
		lie = head;
		head = head->next;

		free(lie);
	}
}
