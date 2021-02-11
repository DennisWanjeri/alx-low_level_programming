#include "holberton.h"
/**
 *print_numbers - print from 0-9 + newline
 *
 *Description:0-9
 *
 *Return:void
 *
 */
void print_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0' + i);
		if (i == 9)
		{
			_putchar('\n');
		}
	}
}
