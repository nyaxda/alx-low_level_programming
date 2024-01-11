#include "lists.h"

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	struct dlistint_t *temp = malloc(sizeof(struct dlistint_t));
	if (temp == NULL)
		return (NULL);
	temp->prev = NULL;
	temp->n = n;
	temp->next = *head;

	if (*head != NULL)
		(*head)->prev = temp;
	*head = temp;

	return(*head);
}
