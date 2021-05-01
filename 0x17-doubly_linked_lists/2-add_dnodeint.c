#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *add_dnodeint - adds a new node at the beginning of double linked list
 *@head:pointer to list
 *@n:integer to add to new node
 *Return:address of new node
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL || head == NULL)
		return (NULL);
	new_node->n = n;
	new_node->prev = NULL;

	if (*head == NULL)
	{
		new_node->next = NULL;
		*head = new_node;
		return (*head);
	}
	else
	{
		while ((*head)->prev != NULL)
		{
			*head = (*head)->prev;
		}
		new_node->next = *head;
		(*head)->prev = new_node;
		*head = new_node;
	}
	return (*head);
}
