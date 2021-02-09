#include "holberton.h"
/**
 *print_sign - prints the sign of a number
 *
 *@n:input
 *
 *Description:prints sign
 *
 *Return: 1 - positive, 0 - zero, -1 - negative
 *
 */
int print_sign(int n)
{
	int x;

	if (n > 0)
	{
		x = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		x = 0;
		_putchar('0');
	}
	else if (n < 0)
	{
		x = -1;
		_putchar('-');
	}
	return (x);
}
