#include <stdlib.h>
#include <string.h>
#include "list.h"

/*
 * add_node_end - Adds a node at the end of the end of list_t list.
 * @head: pointer to a pointer to the to the list_t list.
 * @str: sting to join new node.
 *
 * Return: the location of new node, NULL for fail
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *added_node, *last;

	if (str == NULL)
		return (NULL);

	added_node = malloc(sizeof(list_t));
	if (added_node == NULL)
		return (NULL);

	added_node->len = strlen(str);
	added_node->next = NULL;

	if (*head == NULL)
	{
		*head = added_node;
	}
	else
	{
		last = *head;
	while (last->next != NULL)
		last = last->next;

	last->next = added_node;
	}
	return (added_node);
}

