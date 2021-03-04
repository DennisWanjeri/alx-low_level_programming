#include <stdlib.h>
#include <stdio.h>
/**
 *string_nconcat -concatenates two strings upto n
 *
 *@s1:string1
 *@s2:string2
 *@n:length of string2 to concatenate
 *Return:pointer
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, len1, len2, length;
	unsigned int j;
	char *p;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
		len1++;
	for (i = 0; *(s2 + i) != '\0'; i++)
		len2++;
	if (n >= len2)
	{
		n = len2;
	}
	length = len1 + n + 1;
	p = malloc(sizeof(char) * length);
	if (p == NULL)
	{
		return (NULL);
	}
	for (i = 0; *(s1 + i) != '\0'; i++)
	{
		p[i] = s1[i];
	}
	for (j = 0; i < length; j++, i++)
	{
		p[i] = s2[j];
	}
	p[i] = '\0';
	return (p);
}
