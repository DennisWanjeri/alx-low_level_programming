#include <stdio.h>
/**
 *main - entry point
 *
 *Description: prints whole alphabet in lowercase except q and c
 */
int main(void)
{
	for (ch = 'a'; ch <= 'z' ;ch++)
	{
		if (ch == 'q' || ch == 'e' ) 
			continue;
		putchar(ch);
	}
		putchar(10);
		return (0);
}
