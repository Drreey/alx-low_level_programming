#include "main.h"

/**
 * binary_to_uint - converts  binary didgit to unsigned integer
 * @b : string containing binary number to be changed
 *
 * Return: the converted number, or 0 if there is one or more chars in the string 
 */

unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int result = 0;

	if (b == NULL)
		return (0);

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);

		result = result * 2 + (b[i] - '0');
	}

	return (result);
}
