#include <stdio.h>
#include "holberton.h"
/**
 *main - entry point
 *
 *Description: prints Holberton followed by a newline
 *
 *Return: returns 0(successful)
 *
 */
int main()
{
	char holbText[9] = "Holberton";
	int i;
	for (i = 0; i < 9; i++)
	{
		_putchar(holbText[i]);
	}
	putchar(10);
	return (0);
}
