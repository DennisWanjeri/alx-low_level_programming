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
	int n, i, length;

	while (str[i] != '\0')
	{
		length++;
	}
	length--;

	if (length % 2 == 0)
	{
		n = length / 2;
	}
	else
	{
		n = ((length - 1) / 2);
	}
	for (i = n; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\0');
}
