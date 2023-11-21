#include <stdio.h>
#include "lists.h"

/**
 * reverse_listint - reverses a linked list
 *
 * @head: pointer to the first node in the list
 *
 * Return: pointer to the first node in the new list
*/
listint_t *reverse_listint(listint_t **head)
{
	listint_t *ptr = NULL;
	listint_t *nptr = NULL;

	while (*head)
	{
		nptr = (*head)->next;
		(*head)->next = ptr;
		ptr = *head;
		*head = nptr;
	}

	*head = ptr;

	return (*head);
}
