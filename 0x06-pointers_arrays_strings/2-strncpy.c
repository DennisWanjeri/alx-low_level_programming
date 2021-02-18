#include "holberton.h"
/**
 *_strncpy - copies a string
 *
 *@dest:destination
 *@src:source
 *@n:range
 *
 *Return:dest
 *
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *start = dest;

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (start);
}
