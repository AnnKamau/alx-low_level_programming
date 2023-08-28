#include "lists.h"

/**
 * pop_listint - deletes the head node of a listint_t linked list
 * @head: pointer to a pointer to the head of the list
 * Return: 0 if empty
 */

int pop_listint(listint_t **head)
{
	listint_t *run;
	int g;

	if (head == NULL || *head == NULL)
		return (0);

	run = *head;
	g = run->n;

	*head = (*head)->next;

	free(run);

	return (g);
}
