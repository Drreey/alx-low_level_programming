#include <stdio.h>

void before(void) __attribute__((constructor));

/*
 * before- function to execute before main function
 *
 * return - void
 */

void before(void)
{
	printf("you're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
