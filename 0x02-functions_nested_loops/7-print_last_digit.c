#include "holberton.h"
/**
 *print_last_digit - prints last digit
 *
 *@n:input
 *
 *Description: prints last digit
 *
 *Return:returns last value
 *
 */
int print_last_digit(int n)
{
	int last;

	if (n >= 0)
	{
		last = n % 10;
	}
	else if (n < 0)
	{
		last = -(n % 10);
	}
	_putchar('0' + last);
	return (last);
}
