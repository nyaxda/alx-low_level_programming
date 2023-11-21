#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at a given position.
 *
 * @head: head node of the listint_t linked list
 * @idx: indes of the list where the new node should be added.
 * @n: data of the node to be added.
 *
 * Return - address of the new node, or NULL if it failed.
*/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr = NULL, *current;
	unsigned int index = 0;

	if (*head == NULL)
	{
		return (NULL);
	}
	ptr = malloc(sizeof(listint_t));
	current = *head;
	ptr->n = n;
	while(index < idx - 1 && current)
	{
		current = current->next;
		index++;
	}
	if (current == NULL || current->next == NULL)
	{
		free(ptr);
		return (NULL);
	}

	ptr->next = current->next;
	current->next = ptr;

	return (ptr);
}
