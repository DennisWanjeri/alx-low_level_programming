#include "hash_tables.h"
#include <stdlib.h>
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
