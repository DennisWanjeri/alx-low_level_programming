#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_dog - prints struct dog
 *
 *@d:dog
 *Return:void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	if ((*d).name == NULL)
	{
		printf("Name: (nil)\n");
	}
	if (!(*d).age)
	{
		printf("Age: (nil)\n");
	}
	if ((*d).owner == NULL)
	{
		printf("Owner: (nil)\n");
	}
	printf("Name: %s\n", (*d).name);
	printf("Age: %f\n", (*d).age);
	printf("Owner: %s\n", (*d).owner);
}
