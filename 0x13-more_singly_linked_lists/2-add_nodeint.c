#include "lists.h"

/**
 * add_nodeint - Adds a new node at the beginning of the list
 * head: pointer to a pointer at the head of the listint_t
 * n: to be added to new node
 *
 * Return: address of the new element, or NULL if it failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
