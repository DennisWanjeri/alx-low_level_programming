#include "holberton.h"
/**
 *_puts - prints a string + newline
 *
 *@str:input
 *
 *Return:void
 *
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
	}
	_putchar('\n');
}
