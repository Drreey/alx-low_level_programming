#include <stdlib.h>
#include "lists.h"

/**
 * list_len - number of elements in list-t list
 * @h: pointer to the head of the list.
 *
 * Return: number of elements in the linked list-t list
 *
 */

size_t list_len(const list_t *h)
{
	size_t num;

	for (num = 0; h != NULL; num++)
	{
		h = h->next;

	}

	return (num);
}
