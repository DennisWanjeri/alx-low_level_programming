#include <unistd.h>
/**
 *_putchar - writes character c to stdout
 *
 *@c - character to print
 *
 *Return - returns 0 (successful)
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
