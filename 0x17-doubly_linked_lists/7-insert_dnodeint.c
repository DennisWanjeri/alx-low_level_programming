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
	dlistint_t *prev_node = NULL;

	if (h == NULL || (*h == NULL && idx != 0))
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));
	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	new_node->prev = NULL;
	while (current_node != NULL)
	{
		if (i == idx)
		{
			new_node->next = current_node;
			new_node->prev = current_node->prev;
			prev_node = current_node->prev;
			prev_node->next = new_node;
			return (new_node);
		}
		current_node = current_node->next;
		i++;
	}
	/*end*/
	if (i == idx)
	{
		add_dnodeint_end(h, n);
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
