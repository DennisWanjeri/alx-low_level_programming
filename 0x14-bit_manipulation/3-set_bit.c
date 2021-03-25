#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *set_bit - sets the value of a bit at a certain index to 1
 *@n:pointer to an unsigned long int
 *@index:defines the bit index to change
 *Return:1(success), 0 - otherwise
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	int *temp = *n;

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n | (1 << index);
	return (1);
}
