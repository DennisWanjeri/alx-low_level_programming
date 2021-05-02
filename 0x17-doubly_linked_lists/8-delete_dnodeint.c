#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 *delete_dnodeint_at_index - deletes a node at a certain index
 *@head:pointer to node
 *@index:position to delete at
 *Return:1 - success, -1 error
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *current_node = *head;
	dlistint_t *next_node = NULL;
	dlistint_t *node_to_delete = NULL;

	while (current_node != NULL)
	{
		if (index == 0)
		{
			node_to_delete = current_node;
			next_node = current_node->next;
			if (next_node != NULL)
				next_node->prev = NULL;
			*head = next_node;
			free(node_to_delete);
			return (1);
		}
		if (i == index)
		{
			dlistint_t *prev_node = NULL;

			node_to_delete = current_node;
			next_node = current_node->next;
			prev_node = current_node->prev;
			if (next_node != NULL)
				next_node->prev = prev_node;
			prev_node->next = next_node;
			current_node = next_node;
			free(node_to_delete);
			return (1);
		}
		current_node = current_node->next;
		i++;
	}
	return (-1);
}
