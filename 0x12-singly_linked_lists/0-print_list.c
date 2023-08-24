#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to head of the list
 * Return: the number of nodes
 */

size_t print_list(const list_t *h)
{
	size_t nodes = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		if (current->str == NULL)
		{
			printf("[0] (nil)\n");
		}

		else
		{
			printf("[%u] %s\n", current->len, current->str);
		}
		nodes++;
		current = current->next;
	}
	return (nodes);
}
