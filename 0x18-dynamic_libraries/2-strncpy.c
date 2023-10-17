#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: destination string (where the copy will be stored)
 * @src: source string (the string to be copied)
 * @n: maximum number of characters to be copied from src
 *
 * Return: pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}

