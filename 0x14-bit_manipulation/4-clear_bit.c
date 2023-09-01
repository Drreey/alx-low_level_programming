#include "main.h"
#include <stddef.h>

/**
 * clear_bit - Clear the value of a bit to 0 at a given index.
 * @n: Pointer to the number to modify.
 * @index: The index of the bit to clear (0-based).
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || index >= sizeof(unsigned long int) * 8)
	{
		return (-1); /* Error: Invalid pointer or index out of range */
	}

	*n &= ~(1UL << index);
	return (1);
}

