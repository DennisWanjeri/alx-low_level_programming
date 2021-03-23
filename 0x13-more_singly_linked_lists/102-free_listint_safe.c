#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 *free_listint_safe - frees a listint safely
 *@h:pointer to listint
 *Return:size of list free'd
 */
size_t free_listint_safe(listint_t **head)
{
	int p_dif, i;
	listint_t *temp;

	if (head == NULL || *head == NULL)
	{
		return (0);
	}
	for (i = 0; *head; i++)
	{
		p_dif = (*head - (*head)->next);
		if (p_dif > 0)
		{
			temp = *head;
			*head = (*head)->next;
			free (temp);
		}
		else
		{
			free(*head);
			i++;
			break;
		}
	}
	*head = NULL;
	return (i);
}
