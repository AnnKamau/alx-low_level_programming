#include "lists.h"

/**
 * print_listint_safe - prints a listint_t link list
 * @head: pointer to the head of the lis
 * Return: the number of nodes, exit status 98 on function failure
 */

size_t print_listint_safe(const listint_t *head)
{
	const listint_t *win, *lose;
	size_t note = 0;

	win = head;
	lose = head;

	while (win != NULL && lose != NULL && lose->next != NULL)
	{
		win = win->next;
		lose = lose->next->next;

		printf("[%p] %d\n", (void *)win, win->n);
		note++;

		if (win == lose)
		{
			printf("-> [%p] %d\n", (void *)win, win->n);
			printf("Infinite Loop detected, exit...\n");
			exit(98);
		}
	}
	if (win != NULL)
	{
		printf("[%p] %d\n", (void *)win, win->n);
		note++;
	}
	return (note);
}
