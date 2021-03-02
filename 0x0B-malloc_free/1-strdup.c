#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *_strdup - returns a pointer to a copy of string
 *
 *@str:string parameter
 *
 *Return:NULL(fail),pointer
 */
char *_strdup(char *str)
{
	int i = 0, len = 0;
	char *s;

	if (!*str)
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
		;
	len = i;
	*s = malloc(sizeof(*s) * len);
	if (!*s)
	{
		return (NULL);
	}
	for (i = 0; i < len; i++)
	{
		*(s + i) = *(str + i);
	}
	*(s + i) = '\0';
	return (s);
}
