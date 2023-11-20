#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * pop-listint - deletes the head node of a listint_t linked list.
 *
 * @head: head of the listint_t linked list.
 *
 * Return: head node's data.
*/
int pop_listint(listint_t **head);
{
	listint_t *ptr = NULL;
	int i;

	if (*head == NULL)
		return (0);
	ptr = *head;
	i = (*head)->n;
	*head = (*head)->next;
	free(ptr);

	return (i);
}
