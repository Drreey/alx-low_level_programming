#include "lists.h"

/**
 * get_nodeint_at_index- returns the node ata certain
 * index ina alinked list
 * @head: first node in th linked list
 * @index: index of the node to return
 *
 * Return: pointer to the node were looking for or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *current = head;

	while (current && count < index)
	{
		current = current->next;
		count++;
	}

	return (current ? current : NULL);
}
