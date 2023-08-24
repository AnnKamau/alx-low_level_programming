#include "lists.h"

/**
 * add_node - adds a new node at the beggining of a list_t list
 * @head: pointer to the pointer to the head of the list
 * @str: string to be duplicated
 * Return: address of the new node, NULL on failure
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new_nodes;
	size_t len = 0;

	new_nodes = malloc(sizeof(list_t));
	if (new_nodes == NULL)
	{
		return (NULL);
	}
	while (str[len] != '\0')
	{
		len++;
	}
	new_nodes->str = strdup(str);
	new_nodes->len = len;
	new_nodes->next = *head;
	*head = new_nodes;

	return (new_nodes);
}
