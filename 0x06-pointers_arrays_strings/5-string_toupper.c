#include "holberton.h"
/**
 *string_toupper - characters to uppercase
 *
 *@s:input
 *Return:pointer of string
 */
char *string_toupper(char *s)
{
	int i, length, j;

	while (s[i] != '\0')
	{
		i++;
	}
	length = i;
	for (j = 0; j <= length; j++)
	{
		if (s[i] >= 97 && s[i] <= 122)
		{
			s[i] = s[i] - 32;
		}
	}
	return (s);
}
