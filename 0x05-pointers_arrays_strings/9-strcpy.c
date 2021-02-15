#include "holberton.h"
/**
 **_strcpy - copies string pointed to by src
 *@dest:destination
 *@src:source
 *
 *Return:pointer to dest
 *
 */
char *_strcpy(char *dest, char *src)
{
	int i;
	for (i = 0; *src != '\0'; i++)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';

}
