#include "lists.h"

/**
 * pop_listint - deleted the head of the node
 * @head : pointer to a pointer to the head of the list
 * Return: the data of the head node or 0 if empty
 *
 */

int pop_listint(listint_t **head)
{
	listin_t *current;
	int data;

	if (*head == NULL)
	{
		return (0);
	}

	int data = (*head)->n;
	listint_t *current = *head;
	*head = (*head)->next;
	free(current);

	return (data);
}
