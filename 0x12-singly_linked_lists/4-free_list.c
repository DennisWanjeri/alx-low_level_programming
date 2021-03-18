#include "lists.h"
#include <stdlib.h>
/**
 *free_list - frees memory occupied by a list
 *@head:pointer to list
 *Return:void
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		free(head);
		head = head->next;
	}
}
