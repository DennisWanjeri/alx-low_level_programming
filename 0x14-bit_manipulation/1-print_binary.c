#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *print_binary - prints binary rep of a number
 *@n:no. to print
 *Return:void
 */
void print_binary(unsigned long int n)
{
	unsigned int mask = 1024;

	while (mask > 0)
	{
		if ((n & mask) == 0)
		{
			printf("0");
		}
		else
		{
			printf("1");
		}
		mask = mask >> 1;
	}
}
