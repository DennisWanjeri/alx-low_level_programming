#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *shash_table_create - creates an ordered hash table
 *@size: size of the array
 *Return:pointer to a hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *new_table;

	new_table = malloc(sizeof(shash_table_t));
	if (new_table == NULL)
		return (NULL);
	new_table->size = size;
	new_table->array = malloc(sizeof(shash_node_t *) * size);
	if (new_table->array == NULL)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		new_table->array[i] = NULL;
	}
	new_table->shead = NULL;
	new_table->stail = NULL;
	return (new_table);
}
/**
 *hash_djb2 - hash function implementing djb2 algorithm
 *@str:lookup name
 *Return:index mapped to
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash;
	int c;

	hash = 5381;
	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c; /* hash * 33 + c */
	}
	return (hash);
}
/**
 *key_index - gives the index of a key
 *@key:key
 *@size:size of the hash table array
 *Return:index at which the key/value pair should be stored in the
 *array
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index;

	index = hash_djb2(key);
	index = index % size;
	return (index);
}
/**
 *shash_table_set - sets the value of a shash table
 *@ht: pointer to shash_table
 *@key: key
 *@value:value associated with key
 *Return:1- success, 0 - failure
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	char *copy;
	shash_node_t *new, *tmp;

	if (ht == NULL || key == NULL || *key == '\0' || value == NULL)
		return (0);
	
