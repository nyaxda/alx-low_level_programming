#include <stdio.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list.
 *
 * @head: pointer to the first node
 * @n: data of the node to be added
 *
 * Return: Address of the new element, NULL if it failed.
*/
listint_t *add_nodeint(listing_t **head, const int n);
{
	listint_t *ptr = malloc(sizeof(listint_t));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;
	return(ptr);
}
