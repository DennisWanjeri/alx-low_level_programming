#include <stdio.h>
/**
 *main - entry point
 *
 *Description: prints whole alphabet in lowercase except q and c
 */
int main(void)
{
	int letter,n;
	for (letter = 97, n = 1;n < 27;letter++,n++)
	{
		if (letter == 101 || letter == 113 ) 
			continue;
		putchar(letter);
	}
		putchar(10);
		return (0);
}
