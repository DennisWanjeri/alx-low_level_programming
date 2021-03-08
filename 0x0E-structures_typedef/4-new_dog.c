#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *_strlen - finds length of a string
 *@str:string to find length
 *Return:length of string
 */
int _strlen(char *str)
{
	for (i = 0; i != '\0'; i++)
		;
	return (i);
}
/**
 *new_dog - creates a new dog of type dog_t
 *@name:name
 *@age:age
 *@owner:owner
 *Return:pointer to a new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	char *strname, *strowner;
	int lenname, ownlen;
	int i = 0;

	lenname = _strlen(name);
	ownlen = _strlen(owner);
	strname = malloc((sizeof(char) * lenname) + 1);
	if (!strname)
	{
		return (NULL);
	}
	strowner =malloc((sizeof(char) * ownlen) + 1);
	if (!strowner)
	{
		return (NULL);
	}
	for (i = 0; i < lenname; i++)
	{
		strname[i] = name[i];
	}
	for (i = 0; i < ownlen; i++)
		strowner[i] = owner[i];

}
