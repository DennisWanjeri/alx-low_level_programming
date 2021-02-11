#include <stdio.h>
/**
 *main - entry point
 *
 *Return:1- success
 *
 *Description:prints 1-100 except mult. of 3 and 5
 *
 */
int main(void)
{
	int i;
       	for (i = 1; i <= 100; i++)
	{
		if ((i % 3) == 0 && (i % 5) == 0)
		{
			printf("FizzBuzz");
			printf(" ");
		}
		else if ((i % 3) == 0)
		{
			printf("Fizz");
			printf(" ");
		}
		else if ((i % 5) == 0)
		{
			printf("Buzz");
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");
	return (0);
}
