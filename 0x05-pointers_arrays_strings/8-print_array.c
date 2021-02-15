#include "holberton.h"
#include <stdio.h>
/**
 *print_array - prints n ekements of an array + newline
 *
 *@a:input
 *@n:no. of elements
 *
 *Return:void
 *
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i <= n; i++)
	{
		if (i == n)
		{
			printf("%d\n", *a);
		}
		else
		{
		printf("%d, ", *a);
		}
	}
}
