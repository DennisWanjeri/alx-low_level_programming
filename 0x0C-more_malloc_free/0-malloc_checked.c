#include <stdlib.h>
#include <stdio.h>
/**
 *malloc_checked - allocates mem using malloc
 *
 *@b:int param
 *Return:pointer to allocated mem
 *
 */
void *malloc_checked(unsigned int b)
{
	unsigned int a = b;
	void* *p;

	p = malloc(b);
	if (p == NULL)
	{
		exit();
	}
	return (p);
}
