#include "lists.h"

/**
 * insert_dnodeint_at_index - function to insert node at nth index
 * @h: double pointer of dlistint_t type to head of linked list
 * @idx: index to insert node
 * @n: data for new node
 * Return: address of new node or NULL if failed
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *temp;

	if (h == NULL)
		return (NULL);

	if (idx == 0)
		return (add_dnodeint(h, n));

	temp = get_dnodeint_at_index(*h, idx - 1);
	if (temp == NULL && idx != 0)
		return (NULL);

	if (temp == NULL && idx == 0)
		return (add_dnodeint(h, n));

	new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = temp->next;
	new_node->prev = temp;

	if (temp->next != NULL)
		temp->next->prev = new_node;
	else
		return (add_dnodeint_end(h, n));

	temp->next = new_node;

	return (new_node);
}