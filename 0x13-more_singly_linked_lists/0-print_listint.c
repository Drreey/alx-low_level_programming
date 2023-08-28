#include "lists.h"

/*
 * print_listint- prints elemnts of listint list
 * size_t- number of nodes to be returne
 * h - pointer to the nodes in the listine list
 *
 * return : number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t number = 0;

	while (h != NULL)
	{
		printf ("%d\n", h->n);
		h = h->next;
		number ++;
	}
	
	return (number);
}
