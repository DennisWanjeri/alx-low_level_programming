#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *delete_nodeint_at_index - deletes a node at a certain index
 *@head:pointer to the nodeint list
 *@index:index to delete at
 *Return:(1) - success (-1) - otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *temp;

	temp = *head;
	if (i == index)
	{
		*head = temp->next;
		free(temp);
		return (1);
	}
	while (*head)
	{
		if (i == index)
		{
			*head = temp->next;
			free(temp);
			return (1);
		}
		i++;
	}
	return (-1);
}
