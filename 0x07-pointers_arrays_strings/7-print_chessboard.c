#include "holberton.h"
/**
 *print_chessboard - prints the chessboard
 *@a:array input
 *
 *Return:void
 *
 */
void print_chessboard(char (*a)[8])
{
	int i, j;
	int d;

	for (i = 0; i < 8; i++)
	{
		for (j = 0, j < 8; j++)
		{
			_putchar(a[i][j] + '0');
			if (j == 8)
			{
				_putchar('\n');
			}
		}
	}
}
