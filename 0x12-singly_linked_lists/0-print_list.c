#include "lists.h"
#include <stdio.h>

/*
 * print_list - prints the elements of the list_t(linked list)
 * *h - pointer to the lists to be printed
 * return: size_t(number of nodesor elements printed)
 *
 */
size_t print_list(const list_t *h);
{
	size_t num = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
		{
			printf("[%u] %s\n", h->len, h->str);
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
