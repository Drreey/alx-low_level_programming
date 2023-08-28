#include "lists.h"

/*
 * size_t - number of nodes
 * listint_len- function to print length or number of elements
 * h - pointer pointing to the nodes
 *
 * Return: number of element in listint
 */

size_t listint_len(const listint_t *h)
{
	size_t legnth = 0;

	while (h != NULL)
	{
		legnth++;
		h = h->next;
	}
	return (legnth);
}

