#include "main.h"

/**
 * _memcpy - copies memory area
 * @dest: memory where the data will be copied to
 * @src: memory where the data will be copied from
 * @n: number of bytes to copy
 *
 * Return: pointer to the destination memory area @dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
    unsigned int i;

    for (i = 0; i < n; i++)
    {
        dest[i] = src[i];
    }

    return (dest);
}

