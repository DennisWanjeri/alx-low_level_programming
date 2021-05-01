#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
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
