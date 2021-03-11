#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 *print_strings - prints strings passed to it
 *@separator:sep. two strings
 *@n:elements
 *
 *Return:void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list va;

	if (n != 0)
	{
		va_start(va, n);
		for (i = 0; i <= (n - 1); i++)
		{
			str = va_arg(va, char *);
			printf("%s", str != NULL ? str : "(nil)");
			if (i != (n - 1) && separator != NULL)
			{
				printf("%s", separator);
			}
		}
		printf("\n");
	}
	va_end(va);
}
