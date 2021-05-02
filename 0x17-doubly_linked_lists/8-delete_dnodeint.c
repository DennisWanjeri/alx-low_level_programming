#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	unsigned int i = 0;
	dlistint_t *temp = NULL;

	if (*head == NULL)
		return (-1);
	while ((*head)->prev)
		*head = (*head)->prev;
