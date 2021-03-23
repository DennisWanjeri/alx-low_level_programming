#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_listint - prints all elements of a print_listint list
 *@h:pointer to a listint struct
 *Return:no. of nodes
 */
size_t print_listint(const listint_t *h)
{
	unsigned int i;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%i\n", h->n);
		i++;
		h = h->next;
	}
	return (i);
}
