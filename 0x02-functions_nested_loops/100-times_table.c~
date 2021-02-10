#include "holberton.h"
/**
 *print_times_table - prints timestable from n
 *
 *@n:input
 *
 *Return: void
 *
 */
void print_times_table(int n)
{
	int result;

	if (n <= 15 && n > 0)
	{
		int i;

		for (i = 0; i <= n; i++)
		{
			int j;

			for (j = 0; j <= n; j++)
			{
				result = i * j;
				if (j == 0)
				{
					_putchar('0' + result);
				}
				else if (result >= 10)
				{
					_putchar(" ");
					_putchar('0' + (result / 10));
					_putchar('0' + (result % 10));
				}
				else if (result >= 100)
				{
					_putchar(" ");
					_putchar('0' + (result / 100));
					_putchar('0' + ((result / 10) % 10));
					_putchar('0' + (result % 10));
				}
				else
				{
					_putchar(" ");
					_putchar(" ");
					_putchar(result + '0');
				}
				if (j != n)
				{
					_putchar(',');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		break;
	}
}
