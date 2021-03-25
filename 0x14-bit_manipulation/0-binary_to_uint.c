#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 *binary_to_uint - converts a binary number to an unsigned int
 *@b:pointer to a string containing 1 and 0
 *Return:converted number or 0,otherwise
 */
unsigned int binary_to_uint(const char *b)
{
	int i;
	unsigned int num = 0, dec = 0, digit;

	if (b == NULL)
		return (0);
	i = 0;
	while (b[i])
	{
		if (b[i] < '0' || b[i] > '1')
			return (0);
		i++;
	}
	num = atoi(b);
	i = 0;
	while (num != 0)
	{
		digit = num % 10;
		dec += digit << i;
		num /= 10;
		i++;
	}
	return (dec);
}
