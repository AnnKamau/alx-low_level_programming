#include "lists.h"

/**
 * find_listint_loop - finds a loop in the linked list
 * @head: pointer to the pointer of the head of the list
 * Return: the address of the node, NULL if the is no loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *lost, *fall;

	if (head == NULL)
		return (NULL);

	lost = head;
	fall = head;

	while (fall != NULL && fall->next != NULL)
	{
		lost = lost->next;
		fall = fall->next->next;

		if (lost == fall)
		{
			lost = head;
			while (lost != fall)
			{
				lost = lost->next;
				fall = fall->next;
			}
			return (lost);
		}
	}

	return (NULL);
}
