#include <stdio.h>
void startupfun(void) __attribute__ ((constructor));
/**
 *startupfun - prints a string before calling main
 *Return:void
 */
void startupfun(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house");
	printf(" upon my back!\n");
}
