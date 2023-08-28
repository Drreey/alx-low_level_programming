#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of the list
 * @head: pointer to a pointerto the head of the listint_t
 * @n : value to be added to the new node
 *
 * return: address of the new element, or NULLif it failed
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *current;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	current = *head;
	while (current->next != NULL)
		current = current->next;

	current->next = new;
	return (new);
}

