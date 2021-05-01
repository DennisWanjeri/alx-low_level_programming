#include "lists.h"
#include <stdlib.h>
/**
 *free_dlistint - frees a doubly linked list
 *@head:doubly linked list
 *Return:void
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (head == NULL)
		return;
	while(head->prev)
	{
		head = head->prev;
	}
	while (head)
	{
		temp = head->next;
		free(head);
		head = temp;
	}
	free(temp);
}
