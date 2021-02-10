#include "holberton.h"
#include <stdio.h>
/**
 *print_to_98 - prints from n to 98
 *
 *Description: n to 98
 *
 *Return: void
 *
 *@n:input
 */
void print_to_98(int n)
{
	if (n == 98)
	{
		printf("%d\n", n);
	}
	else if (n < 98)
	{
		int i;

		for (i = n; i <= 98; i++)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%n\n", i);
			}
		}
	}
	else if (n > 98)
	{
		int i;

		for (i = n; i > 97; i--)
		{
			if (i != 98)
			{
				printf("%d, ", i);
			}
			else
			{
				printf("%d\n", i);
			}
		}
	}
}
