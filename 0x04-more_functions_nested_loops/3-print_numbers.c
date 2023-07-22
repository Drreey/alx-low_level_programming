#include "main.h"

/**
 * print_numbers - prints the digits (0 through 9) using _putchar
 *
 * Return: Always 0.
 */
void print_numbers(void)
{
	int c;

	for (c = 48; c < 58; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}

