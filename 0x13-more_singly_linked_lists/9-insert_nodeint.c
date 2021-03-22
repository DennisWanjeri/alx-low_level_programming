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
