#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the node at a given index in a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @index: Index of the node to retrieve.
 *
 * Return: Pointer to the node at the given index, or NULL if the index is out of range.
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tracker = head;
	unsigned int counter = 0;

	while (tracker != NULL && counter < index)
	{
		tracker = tracker->next;
		counter++;
	}

	if (tracker == NULL)
		return (NULL);

	return (tracker);
}
