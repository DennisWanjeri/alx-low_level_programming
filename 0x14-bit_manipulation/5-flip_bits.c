/**
 *flip_bits - returns the no. of bits needed to flip a digit to another
 *@n:no. to flip
 *@m:no. to flip into
 *Return:no. of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count, i;

	count = 0;
	for (i = 0; i <= (sizeof(unsigned long int) * 8); i++)
	{
		if ((m & 1) != (n & 1))
		{
			count++;
		}
		m >>= 1;
		n >>= 1;
	}
	return (count);
}
