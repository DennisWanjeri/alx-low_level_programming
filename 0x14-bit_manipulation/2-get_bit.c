#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *get_bit - gets a bit at a certain index
 *@n:no. to find bit
 *@index:index to get bit
 *Return:the bit,otherwise (-1)
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int mask = 1;

	if (index >= sizeof(n) * 8)
		return (-1);
	mask <<= index;
	if ((mask & n) != 0)
		return (1);
	else
		return (0);
	return (-1);
}
