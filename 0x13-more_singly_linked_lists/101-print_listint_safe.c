#include "lists.h"
#include <stdio.h>

/**
 * print_listint_safe(const listint_t *head)
 * @head: pointer to the head of the list
 *
 * Return: the number of nodes in the list
 */

size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *slow, *fast;

	if (!head)
		return (0);

	slow = head;
	fast = head;

	if (fast->next == NULL || fast->next->next == NULL)
		fast = NULL;
	else
		fast = fast->next->next;

	while (slow != NULL && fast != NULL && slow != fast)
	{
		printf("Node [%zu]: Address: %p, Value: %d\n", count, (void *)slow, slow->n);
		count++;

		slow = slow->next;

		if (fast->next == NULL || fast->next->next == NULL)
			fast = NULL;
		else
			fast = fast->next->next;
	}

	if (slow == NULL || fast == NULL)
	{
		printf("Node [%zu]: Address: (nil), Value: %d\n", count, slow ? slow->n : fast->n);
		return (count);
	}

	printf("Node [%zu]: Address: %p, Value: %d\n", count, (void *)slow, slow->n);
	count++;

	slow = slow->next;

	while (slow != fast)
	{
		printf("Node [%zu]: Address: %p, Value: %d\n", count, (void *)slow, slow->n);
		count++;
		slow = slow->next;
		fast = fast->next;
	}

	printf("Node [%zu]: Address: %p, Value: %d\n", count, (void *)slow, slow->n);

	return (count);
}

