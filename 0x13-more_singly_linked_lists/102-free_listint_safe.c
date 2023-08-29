#include "lists.h"

/**
 * free_listint_safe - frees a listint_t list
 * @h: pointer to a pointer to the head of list
 * Return: the size of list that was freed
 */

size_t free_listint_safe(listint_t **h)
{
	listint_t *slope, *flat;
	size_t vice = 0;

	if (h == NULL || *h == NULL)
		return (0);

	slope = *h;
	while (slope != NULL)
	{
		flat = slope->next;
		free(slope);
		vice++;
		slope = flat;

		if (slope == *h)
		{
			*h = NULL;
			break;
		}
	}

	return (vice);
}
