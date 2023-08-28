#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: pointer to the head of the list
 * Return: Number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t bubble = 0;
	listint *lead = head;

	while (lead != NULL)
	{
		printf("%d\n", lead->n);
		lead = lead->next;
		bubble++;
	}

	return (bubble);
}
