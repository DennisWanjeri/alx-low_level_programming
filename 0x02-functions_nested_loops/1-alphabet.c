#include "holberton.h"
/**
 *main - entry point
 *
 *Description: prints the alphabet in lowercase followed by a newline
 *
 *Return:void
 *
 */
void print_alphabet(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
