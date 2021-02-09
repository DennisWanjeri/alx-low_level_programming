#include "holberton.h"
/**
 *jack_bauer - all minutes in a day
 *
 *Description:prints all minutes in a day
 *
 *Return:void
 *
 */
void jack_bauer(void)
{
	int h;

	for (h = 0; h < 24; h++)
	{
		int min;

		for (min = 0; min < 60; min++)
		{
			_putchar('0' + (h / 10));
			_putchar('0' + (h % 10));
			_putchar(':');
			_putchar('0' + (min / 10));
			_putchar('0' + (min % 10));
			_putchar('\n');
		}
	}
}
