#include <stdlib.h>
#include "lists.h"

/*
 * free_list- free list_t
 * @head: pointer to list_t
 */

void free_list(list_t *head)
{
	while (head != NULL)
	{
		list_t *m = head;

		head = head->next;

		free(m->str);
		free(m);
	}
}
