#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *add_nodeint_end - adds a nodeint at the end
 *@head:pointer to head
 *@n:int to add in new node
 *Return:pointer to new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = malloc(sizeof(listint_t));
	listint_t *last, *temp;

	if (new == NULL)
	{
		return (NULL);
	}
	temp = *head;
	new->n = n;
	new->next = NULL;
	if (temp == NULL)
	{
		temp = new;
	}
	else
	{
		last = *head;
		while (last->next != NULL)
		{
			last = last->next;
		}
		last->next = new;
	}
	return (new);
}
