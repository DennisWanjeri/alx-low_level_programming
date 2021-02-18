#include "holberton.h"
/**
 *reverse_array - reverses the contents of an array
 *
 *@a:input
 *@n:input
 *
 *Return:void
 *
 */
void reverse_array(int *a, int n)
{
	int i, max, half;
	int first, last;

	i = 0;
	while (a[i] != '\0')
	{
		i++;
	}
	max = i - 1;
	half = max / 2;
	while (half >= 0)
	{
		first = a[max - half];
		last = a[half];
		a[half] = first;
		a[max - half] = last;
		half--;
	}
}
