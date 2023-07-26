#include "main.h"

/**
 * _strcpy - Copies the string pointed to by src to dest.
 * @dest: Copy to.
 * @src: Copy from.
 *
 * Return: Pointer to the destination string.
 */
char *_strcpy(char *dest, char *src)
{
	int l = 0;
	int x = 0;

	while (*(src + l) != '\0')
	{
		l++;
	}

	for (; x < l; x++)
	{
		dest[x] = src[x];
	}

	dest[l] = '\0';
	return (dest);
}

