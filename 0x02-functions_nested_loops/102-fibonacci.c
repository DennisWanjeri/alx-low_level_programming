#include <stdio.h>
/**
 *main - entry point
 *
 *Description:prints first 50 fibonnacci numbers
 *
 *Return: 0(success)
 */
int main(void)
{
	long int i, t1 = 1, t2 = 2, sum = 0;

	for (i = 1; i < 50; i++)
	{
		printf("%ld, ", t1);
		sum = t1 + t2;
		t1 = t2;
		t2 = sum;
		if (i == 49)
		{
			printf("%ld\n", t1);
		}
	}
	return (0);
}
