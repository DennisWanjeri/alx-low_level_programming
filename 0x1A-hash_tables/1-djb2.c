#include "hash_tables.h"
#include <stdlib.h>
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
