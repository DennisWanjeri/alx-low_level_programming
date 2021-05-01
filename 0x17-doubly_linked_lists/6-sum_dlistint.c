#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 *sum_dlistint - calculates the sum of a doubly linked list
 *@head:pointer to linked list
 *Return:sum
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (sum);
	while (head->prev)
	{
		head = head->prev;
	}
	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}
