#include <stdlib.h>
#include <stdio.h>
/**
 *_realloc - reallocates memory using malloc and free
 *@ptr:previous mem
 *@old_size:old
 *@new_size:new
 *Return:pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int i;
	char *p;

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		p = malloc(new_size);
	}
	if (new_size > old_size)
	{
		p = malloc(new_size);
		if (p == NULL)
		{
			return (p);
		}
		for (i = 0; i < old_size; i++)
		{
			p[i] = ((char *)ptr)[i];
		}
		free(ptr);
	}
	return (p);
}
