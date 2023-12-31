#include <stdio.h>
#include "lists.h"

/*
 * print_list - prints the elements of the list_t(linked list)
 * @h: pointer to the lists to be printed
 *
 * return: size_t
 *
 */
size_t print_list(const list_t *h)
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%lu] %s\n", h->len, h->str);
		}
		else
		{
			printf("[0] (nil)\n");
		}
		h = h->next;
		num++;

	}

	return (num);
}
