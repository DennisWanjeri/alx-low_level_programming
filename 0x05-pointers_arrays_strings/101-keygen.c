#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 *main - generates random passwords
 *
 *Return:0(success)
 *
 */
int main(void)
{
	int i = 0;
	int random, num;

	srand(time(NULL));
	num = 2772;
	while (num > 122)
	{
		random = (rand() % 100);
		printf("%c", random);
		num = random;
		i++;
	}
	printf("%c", random);
	return (0);
}
