#include "holberton.h"
/**
 *more_numbers - from 0-14 x10
 *
 *Description:0-14 x10
 *
 *Return:void
 *
 */
void more_numbers(void)
{
	int i, j, z;

	i = 0;

	while (i < 10)
	{
		j = 0;

		while (j < 15)
		{
			if (j >= 10)
			{
				_putchar('0' + (j / 10));
				_putchar('0' + (j % 10));
				j++;
			}
			else
			{
				z = j;
				_putchar('0' + z);
			}
		}
		_putchar('\n');
		i++;
	}
}
