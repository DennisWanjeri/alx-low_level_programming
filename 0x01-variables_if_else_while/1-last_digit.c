#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - entry point
 *
 *Description: tests whether a random number is negative or positive
 *
 *Return: Always zero (successful)
 */
int main(void)
{

        int n,last;
 
	srand(time(0));
	n = rand() - RAND_MAX / 2;

	last=n % 10;

	if (last > 5)
	{
		printf("last digit of %d is %d and is greater than 5\n", n, last);
	}
	else if (last < 6 && last =! 0)
	{
		printf("last digit of %d is %d and is less than 6 and not 0\n", n, last);
	}
	else if (last == 0)
	{
		printf("last digit of %d is %d and is zero/n", n, last);
	}

	return (0);
}
