#include <stdlib.h>
#include <stdio.h>
/**
 *flip_bits - returns the no. of bits needed to flip a digit to another
 *@n:no. to flip
 *@m:no. to flip into
 *Return:no. of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int xor = n ^ m, count, i;

	count = 0;
	for (i = 0; i <= (sizeof(unsigned long int) * 8); i++)
	{
		if ((xor & 1) == 1)
		{
			count++;
		}
		xor = xor >> 1;
	}
	return (count);
}
