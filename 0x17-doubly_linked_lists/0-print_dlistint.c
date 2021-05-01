#include <stdio.h>
#include "lists.h"
#include <stdlib.h>
/**
 *print_dlistint - prints the contents of a doubly linked list
 *@h:list to print
 *Return:number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t node = 0;

	if (h == NULL)
		return (node);
	while (h)
	{
		printf("%i\n", h->n);
		node++;
		h = h->next;
	}
	return (node);
}
