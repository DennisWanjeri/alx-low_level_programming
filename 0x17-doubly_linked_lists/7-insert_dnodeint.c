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
	dlistint_t *new_node = NULL;
	size_t size = 0;

	if (!h)
		return (NULL);
	if (*h == NULL || idx == 0)
	{
		new_node = add_dnodeint(*&h, n);
		return (new_node);
	}
	size = dlistint_len(*h);
	if (size < idx)
		return (NULL);
	if (size == idx)
	{
		new_node = add_dnodeint_end(*&h, n);
		return (*h);
	}
	while ((*h)->prev)
		*h = (*h)->prev;
	while (i <= idx)
	{
		if (i == idx)
		{
			new_node = malloc(sizeof(dlistint_t));
			new_node->n = n;
			new_node->next = *h;
			new_node->prev = (*h)->prev;
			if ((*h)->prev != NULL)
				(*h)->prev->next = new_node;
			(*h)->prev = new_node;
			while ((*h)->prev)
				*h = (*h)->prev;
			return (*h);
		}
		*h = (*h)->next, i++;
	}
	new_node = add_dnodeint_end(*&h, n);
	return (*h);
}
/**
*dlistint_len - returns the length of a double linked list
*@h:list to find length
*Return:size of node
*/
size_t dlistint_len(const dlistint_t *h)
{
	size_t n = 0;

	if (h == NULL)
		return (n);
	while (h)
	{
		n++;
		h = h->next;
	}
	return (n);
}
