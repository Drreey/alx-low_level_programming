#include "lists.h"

/**
 * sum_listint - calculates the sum of data in a listint_t list
 * @head: first node in the linked list
 *
 * Return: the computed sum
 */

int sum_listint(listint_t *head)
{
	int total = 0;
	listint_t *node = head;

	while (node != NULL)
	{
		total += node->n;
		node = node->next;
	}

	return (total);
}
