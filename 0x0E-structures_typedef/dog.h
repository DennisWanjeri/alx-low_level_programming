#ifndef DOG_H
#define DOG_H

/**
 *dog - structure for dog variables
 *@name:name
 *@age:age of dog
 *@owner:name of owner
 */
typedef struct dog
{
	char * name;
	float age;
	char *owner;
} dog_t;
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);
void free_dog(dog_t *d);
#endif
