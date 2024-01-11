#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a
 * given position in a doubly linked list.
 * @h: A pointer to the head of the doubly linked list.
 * @idx: The index at which the new node should be inserted.
 * @n: The value to be stored in the new node.
 *
 * Return: The address of the newly inserted node, or NULL if it fails.
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *new_node;
	unsigned int tracker = 0;

	if (h == NULL)
		return (NULL);
	if (idx == 0)
		return (add_dnodeint(h, n));

	current = *h;
	while (current != NULL && tracker < idx)
	{
		current = current->next;
		tracker++;
	}

	if (tracker != idx)
	{
		if (tracker == idx - 1 && current == NULL)
			return (add_dnodeint_end(h, n));
		else
			return (NULL);
	}

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = current;

	if (current != NULL)
	{
		new_node->prev = current->prev;
		current->prev->next = new_node;
		current->prev = new_node;
	}
	return (new_node);
}
