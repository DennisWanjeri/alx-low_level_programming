#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
/**
 *insert_nodeint_at_index - inserts a node at a certain index
 *@head:pointer to listint
 *@idx:index of list to add new node
 *@n:new node data
 *Return:pointer to the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *prev;
	unsigned int i = 0;
	listint_t *temp;

	if (head == NULL)
	{
		return (NULL);
	}
	new = malloc(sizeof(listint_t));
	if (new == NULL)
	{
		free(new);
		return (NULL);
	}
	new->n = n;
	if (i == idx)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	temp = *head;
	while (temp->next)
	{
		if (i == idx)
		{
			prev->next = new;
			new->next = temp;
			return (new);
		}
		i++;
		prev = temp;
		temp = temp->next;
/*when the idx points to the end*/
		if (i == idx && !temp)
		{
			prev->next = new;
			new->next = NULL;
			return (new);
		}
	}
	return (NULL);
}
