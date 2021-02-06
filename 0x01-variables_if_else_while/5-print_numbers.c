#include <stdio.h>
/**
 *main - entry point
 *
 *Description:prints all single digits starting from 0
 *
 *Return: Always returns zero
 *
 */
int main(void)
{
	int i = 0;

	for (i = 0; i < 10; i++)
	{
		printf("%d", i);
	}
	printf("\n");
	return (0);
}
