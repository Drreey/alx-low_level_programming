#include "main.h"

/**
 * puts_half - Prints half of a string.
 *            If the length is odd, it prints the second half.
 * @str: Input string.
 *
 * Return: None (void).
 */
void puts_half(char *str)
{
	int a, n, longi;

	longi = 0;
	for (a = 0; str[a] != '\0'; a++)
		longi++;

	n = (longi / 2);
	if ((longi % 2) == 1)
		n = ((longi + 1) / 2);

	for (a = n; str[a] != '\0'; a++)
		_putchar(str[a]);

	_putchar('\n');
}

