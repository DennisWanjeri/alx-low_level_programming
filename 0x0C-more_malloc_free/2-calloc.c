#include <stdlib.h>
#include <stdio.h>
/**
 *_calloc - allocates memory for an array;
 *@nmemb:no of elements
 *@size:size of elements
 *Return:pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int sizetot, i;
	void *p;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	sizetot = nmemb * size;
	p = malloc(sizetot);
	if (!p)
	{
		return (NULL);
		free(p);
	}
	for (i = 0; i < sizetot; i++)
	{
		p[i] = 0;
	}
	return (p);
}
