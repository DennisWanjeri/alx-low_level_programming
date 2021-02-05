#include <stdio.h>
/**
 *main - entry point
 *
 *Description:prints the alphabet
 *
 *Return: Always 0 (successful)
 */
int main(void)
{
	int letter,n;

	for (letter = 97,n = 1;n<27;letter++,n++)
	{
		putchar(letter);
	}
	putchar(10); 
     	return (0);


}
