#include "lists.h"

/**
 * free_listint_safe - Frees a linked list safely, handling loops.
 * @head_ptr: Pointer to a pointer to the first node in the linked list.
 *
 * Return: The number of elements freed in the list.
 */
size_t free_listint_safe(listint_t **head_ptr)
{
	size_t count = 0;
	int difference;
	listint_t *temporary;

	if (!head_ptr || !*head_ptr)
		return (0);

	while (*head_ptr)
	{
		difference = *head_ptr - (*head_ptr)->next;
		if (difference > 0)
		{
			temporary = (*head_ptr)->next;
			free(*head_ptr);
			*head_ptr = temporary;
			count++;
		}
		else
		{
			free(*head_ptr);
			*head_ptr = NULL;
			count++;
			break;
		}
	}

	*head_ptr = NULL;

	return (count);
}

