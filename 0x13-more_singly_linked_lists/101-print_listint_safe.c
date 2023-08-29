#include "lists.h"


/**
 * print_listint_safe - prints a listint_t link list safely.
 * @head: pointer to the head of the list.
 * Return: the number of nodes.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t note = 0;
	const listint_t *slope_ptr = head, *flat_ptr = head;

	if (head == NULL)
		return (0);

	while (flat_ptr != NULL && flat_ptr->next != NULL)
	{
		printf("[%p] %d\n", (void *)slope_ptr, slope_ptr->n);
		note++;

		slope_ptr = slope_ptr->next;
		flat_ptr = flat_ptr->next->next;

		if (slope_ptr == flat_ptr)
		{
			printf("-> [%p] %d\n", (void *)slope_ptr, slope_ptr->n);
			break;
		}
	}
	if (slope_ptr == flat_ptr)
	{
		slope_ptr = head;

		while (slope_ptr != flat_ptr)
		{
			printf("[%p] %d\n", (void *)slope_ptr, slope_ptr->n);
			note++;

			slope_ptr = slope_ptr->next;
			flat_ptr = flat_ptr->next;
		}
		printf("-> [%p] %d\n", (void *)slope_ptr, slope_ptr->n);
		note++;
	}
	else
	{
		while (slope_ptr != NULL)
		{
			printf("[%p] %d\n", (void *)slope_ptr, slope_ptr->n);
			note++;

			slope_ptr = slope_ptr->next;
		}
	}
	return (note);
}
