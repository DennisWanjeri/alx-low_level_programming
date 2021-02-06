#include <stdio.h>
/**
 *main - entry point
 *
 *Description:prints all possible combinations of single-digit no.
 *
 *Return: Always zero
 */
int main(void)
{
	int dig, i;

	for (dig = 48, i = 0; i < 10; dig++, i++)
	{
		putchar(dig);
		if (i < 9)
		{
			putchar(44);
			putchar(32);
		}
	}
		putchar(10);
		return (0);

}
