#include "lists.h"

/**
 * free_dlistint - Frees a doubly linked list.
 * @head: Pointer to the head of the list.
 *
 * This function frees the memory allocated for each node in a doubly
 * linked list. It starts from the head of the list
 * and iteratively frees each node until the end.
 * 
 * Return: void.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (temp != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
