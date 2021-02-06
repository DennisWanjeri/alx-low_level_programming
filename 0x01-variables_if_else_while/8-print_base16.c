#include <stdio.h>
/**
 *main - entry point
 *
 *Description:prints numbers of base16 in lowercase
 *
 *Return: Always zero
 */
int main(void)
{
	int dig, letterhex, n;

	for (dig = 48, n = 0; n < 10; dig++, n++)
	{
		putchar(dig);
	}
	for (letterhex = 97, n = 1; n < 7; letterhex++, n++)
	{
		putchar(letterhex);
	}
	putchar(10);
	return (0);
}
