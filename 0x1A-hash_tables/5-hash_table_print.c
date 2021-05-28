#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *hash_table_print - prints the hash table in a key:value format
 *@ht: pointer to hashtable
 *Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int i;
	hash_node_t *node;
	unsigned char coma_flag = 0;

	if (ht == NULL)
		return;
	printf("{");
	i = 0;
	while (i < ht->size)
	{
		if (ht->array[i] != NULL)
		{
			if (coma_flag == 1)
				printf(", ");
			node = ht->array[i];
			while (node != NULL)
			{
				printf("'%s': '%s'", node->key, node->value);
				node = node->next;
				if (node != NULL)
					printf(", ");
			}
			coma_flag = 1;
		}
		i++;
	}
	printf("}\n");
}
