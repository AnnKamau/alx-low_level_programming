#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes the node at a given index.
 * @head: A pointer to a pointer to the head of the list.
 * @index: The index of the node to delete (index starts at 0).
 *
 * Return: 1 if it succeeded, -1 if it failed.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
    dlistint_t *temp, *previous;
    unsigned int count = 0;

    if (head == NULL || *head == NULL)
        return -1;

    if (index == 0)
    {
        temp = *head;
        *head = temp->next;
        if (*head != NULL)
            (*head)->prev = NULL;
        free(temp);
        return 1;
    }

    temp = *head;
    while (temp != NULL && count < index)
    {
        previous = temp;
        temp = temp->next;
        count++;
    }

    if (temp == NULL)
        return -1;

    previous->next = temp->next;
    if (temp->next != NULL)
        temp->next->prev = previous;
    free(temp);

    return 1;
}
