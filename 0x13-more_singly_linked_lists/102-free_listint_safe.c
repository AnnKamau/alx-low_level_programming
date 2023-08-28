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
	flat = *h;

	while (slope != NULL && flat != NULL && flat->next != NULL)
	{
		slope = slope->next;
		flat = flat->next->next;

		if (slope == flat)
		{
			slope = *h;

			while (slope != flat)
			{
				*h = slope->next;
				free(slope);
				slope = *h;
				vice++;
			}

			*h = NULL;
			return (vice);
		}
	}
	while (*h != NULL)
	{
		slope = *h;
		*h = slope->next;
		free(slope);
		vice++;
	}
	return (vice);
}
