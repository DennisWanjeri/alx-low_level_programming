#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *insert_dnodeint_at_index - inserts a new node at a given position
 *@h:pointer to list
 *@idx:index to insert at
 *@n:integer data
 *Return:address of new_node or NULL
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i = 0;
	dlistint_t *current_node = *h;
	dlistint_t *new_node = NULL;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	if (*h == NULL)
	{
		*h = new_node;
		return (*h);
	}
	if (idx == 0)
	{
		return (add_dnodeint(h, n));
	}
	while (current_node != NULL)
	{
		if (i == idx)
		{
			new_node->next = current_node;
			new_node->prev = current_node->prev;
			current_node->prev->next = new_node;
			current_node->prev = new_node;
			return (new_node);
		}
		i++;
		current_node = current_node->next;
	}
	/*end*/
	if (i == idx)
	{
		return (add_dnodeint_end(h, n));
	}
	return (NULL);
}
