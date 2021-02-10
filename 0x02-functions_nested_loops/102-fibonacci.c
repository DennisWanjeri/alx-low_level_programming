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
	int i, t1 = 0, t2 = 1, nextTerm;
	int n = 50;

	for (i = 1; i <= n; i++)
	{
		printf("%d, ", t1);
		nextTerm = t1 + t2;
		t1 = t2;
		t2 = nextTerm;
	}
	printf("\n");
	return (0);
}
