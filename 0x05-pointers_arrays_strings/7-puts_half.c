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
	int n, i, length, j;

	while (str[i] != '\0')
	{
		i++;
	}
	length = i;
	j = length / 2;
	while (j <= length)
	{
		_putchar(str[j]);
		j++;
	}
	_putchar('\n');
}
