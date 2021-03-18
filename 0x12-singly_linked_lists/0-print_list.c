#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *print_list - prints all elements of a list_t list
 *@h:list to print
 *Return:no. of nodes
 */
size_t print_list(const list_t *h)
{
	size_t i = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[0] (nil)");
		printf("[%d]", h->len);
		printf("%s\n", h->str);
		h = h->next;
		i++;
	}
	return (i);
}
