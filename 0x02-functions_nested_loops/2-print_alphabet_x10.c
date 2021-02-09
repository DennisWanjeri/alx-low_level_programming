#include "holberton.h"
/**
 *print_alphabet_x10 - prints alphabet 10 times
 *
 *Description: prints the alphabet in lowercase ten times
 *
 *Return: void
 *
 */
void print_alphabet_x10(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		char ch;

		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
	}
}
