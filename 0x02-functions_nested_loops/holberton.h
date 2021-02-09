#include <unistd.h>
/**
 *_putchar - writes character c to stdout
 *
 *@c - character to print
 *
 *Return - returns 0 (successful)
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

/**
 *print_alphabet - prints the whole alphabet in lowercase
 *
 *@void - doesn't accept any arguements
 *
 *Return: always zero
 *
 */
void print_alphabet()
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		_putchar(ch);
	}
	_putchar('\n');
}
/**
 *print_alphabet_x10 - prints alphabet in lowercase 10 times
 *
 *Return: no value
 *
 */
void print_alphabet_x10()
{
	int i;
	for (i = 0; i < 10; i++)
	{
		char ch;
		for (ch = 'a'; ch < 'z'; ch++)
		{
			_putchar(ch);
		}

		_putchar('\n');
	}
       
}
