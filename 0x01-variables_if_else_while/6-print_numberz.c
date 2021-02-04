#include <stdio.h>
/**
 *main - entry point
 *
 *Description :prints all single digit characters of base 10
 *
 *Return :always zero
 */
int main(void)
{
	int i;

	for (i = 0; i < 10;i++)
	{
		putchar(i);
	}
	putchar(10);
	return (0);
}
