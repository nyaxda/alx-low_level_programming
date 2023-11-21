#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index index of a listint_t
 * linked list
 *
 * @index: index of the node that should be deleted.
 * @head: head node of the listint_t list
 *
 * Return: 1 if it succeeded, -1 if it failed.
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *ptr, *temp;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	ptr = *head;

	if (index == 0)
	{
		temp = ptr->next;
		free(ptr);
		*head = temp;
		return (1);
	}
	else
	{
		for (i = 0; i < index - 1; i++)
		{
			if (ptr == NULL || ptr->next == NULL)
				return (-1);
			ptr = ptr->next;
		}

		temp = ptr->next;
		ptr->next = temp->next;
		free(temp);

		return (1);
	}
}