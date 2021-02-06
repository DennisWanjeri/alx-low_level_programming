#include <stdio.h>
/**
 *main - entry point
 *
 *Description:prints number from 00 to 99
 *
 *Return:always zero
 */
int main(void)
{
	int dig;

	for (dig = 0; dig < 100; dig++)
	{
		putchar((dig / 10) + '0');
		putchar((dig % 10) + '0');
		if (dig < 99)
		{
			putchar(44);
			putchar(32);
		}
	}
	putchar(10);
	return (0);
}
