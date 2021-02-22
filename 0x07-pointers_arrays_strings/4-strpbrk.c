#include "holberton.h"
/**
 *_strprbk - locates the first occurrence of string s in string
 *accept
 *
 *@s:string scanned
 *@accept:test
 *
 *Return:pointer to byte in s
 *
 */
char *_strpbrk(char *s, char *accept)
{
	int i, j, pos, flag = 0;

	i = 0;
	while (*(s + i) != '\0')
	{
		i++;
	}
	pos = i;
	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; s[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				if (j <= pos)
				{
					pos = j;
					flag = 1;
				}
			}
		}
	}
	if (flag == 1)
	{
		return (&s[pos]);
	}
	else
	{
		return (NULL);
	}
}
