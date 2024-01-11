#include "lists.h"

/**
 * delete_dnodeint_at_index - Deletes a node at a given
 * index in a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if successful, -1 if the node does not exist or
 * the list is empty.
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *previous;
	unsigned int tracker;

	if (*head == NULL)
		return (-1);
	current = *head;
	tracker = 0;
	if (index == 0)
	{
		*head = current->next;
		if (current->next != NULL)
			current->next->prev = NULL;
		free_dlistint(current);
		return (1);
	}
	while(current != NULL && tracker < index)
	{
		previous = current;
		current = current->next;
		tracker++;
	}
	if (tracker != index || current == NULL)
		return (-1);

	previous->next = current->next;
	if(current->next != NULL)
		current->next->prev = previous;

	free_dlistint(current);
	return (1);
}
