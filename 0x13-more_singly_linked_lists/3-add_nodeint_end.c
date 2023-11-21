#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 *
 * @head: pointer to the first node
 * @n: data of the node to be added
 *
 * Return: Address of the new element, NULL if it failed.
*/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t));

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return (ptr);
}
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list.
 *
 * @head: pointer to the first node
 * @n: data of the node to be added
 *
 * Return: Address of the new element, NULL if it failed.
*/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *ptr = malloc(sizeof(listint_t)), *current;

	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = NULL;
	if (*head == NULL)
	{
		add_nodeint(head, n);
		return (*head);
	}
	current = *head;
	while (current->next != NULL)
	{
		current = current->next;
	}
	current->next = ptr;
	return (ptr);
}
