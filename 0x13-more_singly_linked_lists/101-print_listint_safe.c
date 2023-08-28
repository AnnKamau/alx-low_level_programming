#include "lists.h"

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - counts number of nodes
 * @head: pointer to the head of the list to check
 * Return: if list is not looped - 0. otherwise number of nodes
 */

size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tall, *height;
	size_t note = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tall = head->next;
	height = (head->next)->next;

	while (height)
	{
		if (tall == height)
		{
			tall = head;
			while (tall != height)
			{
				note++;
				tall = tall->next;
				height = height->next;
			}
			tall = tall->next;

			while (tall != height)
			{
				note++;
				tall = tall->next;
			}
			return (note);
		}
		tall = tall->next;
		height = (height->next)->next;
	}
	return (0);
}



/**
 * print_listint_safe - prints a listint_t link list safely.
 * @head: pointer to the head of the list.
 * Return: the number of nodes.
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t note, ind = 0;

	note = looped_listint_len(head);

	if (note == 0)
	{
		for (; head != NULL; note++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (ind = 0; ind < note; ind++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("[%p] %d\n", (void *)head, head->n);
	}
	return (note);
}
