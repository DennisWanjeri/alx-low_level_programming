#include "holberton.h"
/**
 *puts_half - prints last half of a string
 *
 *@str:input
 *
 *Return:void
 *
 */
void puts_half(char *str)
{
	int n, i;
	int length = _strln(str);

	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = ((length - 1) / 2);
	}
	for (i = n; *str != '\0'; i++)
	{
		_putchar(*str);
	}
}
