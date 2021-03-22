#include "lists.h"
#include <stdlib.h>
/**
 *free_listint - frees the contents of a listint_t
 *@head:pointer to list
 *Return:void
 */
void free_listint(listint_t *head)
{
	listint_t *d;

	while (head != NULL)
	{
		d = head;
		head = head->next;
		free(d);
	}
}
