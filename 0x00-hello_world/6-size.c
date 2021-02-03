#include <stdio.h>
/**
 *main - entry point
 *
 *Return: Always zero (success)
 */
int main(void)
{
	char charType;
	int intType;
	long int longint;
	long long int lolongline;
	float floatType;

	printf("Size of char: %d byte(s)\n", sizeof(charType));
	printf("Size of int: %d byte(s)\n", sizeof(intType));
	printf("Size of long int: %d byte(s)\n", sizeof(longint));
	printf("Size of long long int: %d byte(s)\n", sizeof(lolongline));
	printf("Size of float: %d byte(s)\n", sizeof(floatType));
	return (0);
}
