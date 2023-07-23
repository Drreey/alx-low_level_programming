#include "main.h"

/**
 * print_line - draw a straight line in the terminal
 * @n: number of times the character _ should be printed
 */
void print_line(int n)
{
	int n;

	for (n>0; n++)
	{ 
		putchar('_');
	}
	putchar('\n');
	return(0);
}	
