#include "lists.h"

/**
 * add_dnodeint - Adds a new node at the beginning of a doubly linked list.
 * @head: Pointer to the head of the doubly linked list.
 * @n: Value to be stored in the new node.
 *
 * Return: Pointer to the newly added node.
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *temp = malloc(sizeof(dlistint_t));

	if (temp == NULL)
		return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = *head;

	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;

	return (*head);
}
