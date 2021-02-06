#include <stdio.h>
/**
 *main - entry point
 *
 *Description:prints alphabet in reverse
 *
 *Return: Always zero
 */
int main(void)
{
	int letter, n;

	for (letter = 122, n = 1; n < 27; letter--, n++)
	{
		putchar(letter);
	}
	putchar(10);
	return (0);
}
