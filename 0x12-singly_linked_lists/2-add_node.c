#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
/**
 *add_node - adds a new node at the beginning of a list_t list
 *@head:pointer to the first node
 *@str:string to add to new node
 *Return:address of new element,NULL otherwise
 */
list_t *add_node(list_t **head, const char *str)
{
	int len;
	list_t *new_node = malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	for (len = 0; str[len]; len++)
		;
	new_node->len = len;
	new_node->str = strdup(str);
	new_node->next = (*head);
	(*head) = new_node;
	return (new_node);
}
