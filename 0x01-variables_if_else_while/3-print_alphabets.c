#include <stdio.h>
/**
 *main - entry point
 *
 *Return: Always 0 (successful)
 *
 *Description: prints the alphabet in uppercase and lowercase
 */
int main(void)
{
	int Sletter, Cletter, n;

	for (Sletter = 97, n = 1; n < 27; Sletter++, n++)
	{
		putchar(Sletter);
	}
	for (Cletter = 65, n = 1; n < 27; Cletter++, n++)
	{
		putchar(Cletter);
	}
	putchar(10);
	return (0);
}
