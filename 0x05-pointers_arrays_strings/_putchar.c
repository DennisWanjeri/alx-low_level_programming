#include <unistd.h>
/**
 *_putchar - prints character to stdout
 *
 *@c:character to print out
 *
 *Return:0-success 1-error -1-error set appropriately
 *
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
