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

	if (str == NULL)
	{
		return (NULL);
	}
	for (i = 0; str[i] != '\0'; i++)
		len++;
	s = malloc(sizeof(char) * len);
	for (i = 0; i < len; i++)
	{
		s[i] = str[i];
	}
	return (s);
}
