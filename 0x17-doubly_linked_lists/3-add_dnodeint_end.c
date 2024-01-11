#include "lists.h"

/**
 * add_dnodeint_end - Adds a new node at the end of a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @n: Value to be stored in the new node.
 *
 * Return: Address of the newly added node, or NULL if it fails.
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t new_node = malloc(sizeof(dlistint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (*head == NULL)
	{
		new_node->prev = NULL;
		*head = new_node;
	}
	else
	{
		dlistint_t *current = *head;
		while (current != NULL)
		current = current->next;
		new_node->prev = current;
		current->next = new_node;
	}
	return (current);
}
