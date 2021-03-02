#include <stdio.h>
#include <stdlib.h>
#include "holberton.h"
/**
 *str_concat - concatenates two strings
 *
 *@s1:string 1
 *@s2:string2
 *
 *Return:pointer,NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *p;
	int i, j, len1, len2;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	for (i = 0; s1[i] != '\0'; i++)
		;
	len1 = i;
	for (j = 0; s2[j] != '\0'; j++)
		;
	len2 = j;
	int length = len1 + len2 + 1;
	p = malloc(length);
	for (i = 0; s1[i] != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = len1, i = 0; s2[j] != '\0'; j++, i++)
	{
		p[j] = s2[i];
	}
	p[j] = '\0';
	return (p);
}
