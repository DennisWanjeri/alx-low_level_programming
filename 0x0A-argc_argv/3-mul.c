#include "holberton.h"
/**
 *main - multiplies two numbers
 *
 *@argc:arguement count
 *@argv:arguement vector
 *Return:0(success)
 */
int main(int argc, char *argv[])
{
	int sum = 0;

	if (argc == 3)
	{
		sum += argv[1] * argv[2];
		_putchar(sum + '0');
		_putchar('\n');
		return (0);
	}
	else
	{
	_putchar('Error');
	_putchar('\n');
	return (1);
	}
}
