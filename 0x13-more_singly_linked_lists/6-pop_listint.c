#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *pop_listint - deletes the head node and returns its data
 *@head:pointer to listint
 *Return:head data
 */
int pop_listint(listint_t **head)
{
	int data = 0;
	listint_t *temp;

	if (*head == NULL)
		return (0);
	data = (*head)->n;
	temp = *head;
	(*head) = (*head)->next;
	free(temp);
	return (data);
}
