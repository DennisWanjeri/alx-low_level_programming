/**
 *clear_bit - sets the value of a bit to 0 at an index
 *@n:pointer to no.
 *@index:index
 *Return:0(success), (-1),otherwise
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	*n = *n & ~(1 << index);
	return (1);
}
