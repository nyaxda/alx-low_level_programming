#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * get_nodeint_at_index - gets the nth node of a listint_t linked list.
 *
 * @head: head pointer of the listint_t linked list.
 *
 * Return: nth node
*/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *ptr = NULL;
	unsigned int i = 0;

	if (head == NULL)
	{
		return(-1);
	}
	ptr = head;
	while(i < index)
	{
		ptr = ptr->next;
		i++;
	}
	ptr = ptr->next;
	return (ptr);
}
