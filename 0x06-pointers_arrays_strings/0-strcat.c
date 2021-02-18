#include "holberton.h"
/**
 *_strcat - conctenates two strings
 *
 *@dest:destination
 *@src:source
 *
 *Return:char
 *
 */
char *_strcat(char *dest, char *src)
{
	int i, destlength, j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		destlength++;
	}
	for (j = 0; src[j] != '\0'; j++, destlength++)
	{
		dest[destlength] = src[j];
	}
	dest[destlength] = '\0';
	return (dest);
}
