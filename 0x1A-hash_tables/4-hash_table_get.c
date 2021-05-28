#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
/**
 *hash_table_get - retrieves a value associated with a key
 *@ht:pointer to table
 *@key:key to retrieve
 *Return:value associated with element, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (ht == NULL || key == NULL || *key == '\0')
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	if (index >= ht->size)
		return (NULL);
	node = ht->array[index];
	while (node && strcmp(key, node->key) != 0)
		node = node->next;
	if (node == NULL)
		return (NULL);
	return (node->value);
}
