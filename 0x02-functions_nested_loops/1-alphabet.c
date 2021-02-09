#include "holberton.h"
/**
 *print_alphabet - prints a-z
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
