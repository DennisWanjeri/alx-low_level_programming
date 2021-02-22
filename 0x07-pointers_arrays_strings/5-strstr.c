#include "holberton.h"
/**
 *_strstr - locates a substring
 *
 *@haystack:string scanned
 *@needle:substring to look for
 *
 *Return:pointer to beginning of substring,NULl instead
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;
	int pos;
	int flag = 0;

	while (*(hastack + i) != '\0')
	{
		i++;
	}
	pos = i;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
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
		return (&haystack[pos]);
	}
	else
	{
		return (NULL);
	}
}
