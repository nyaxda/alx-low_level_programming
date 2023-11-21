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

	temp = *head;
	ptr = *head;

	for (i = 0; i < index; i++)
	{
		if (i == 0 && index == 1)
		{
			*head = (*head)->next;
			free(ptr);
			return (1);
		}
		else
		{
			if (i == index - 1 && temp)
			{
				ptr->next = temp->next;
				free(temp);
				return (1);
			}
			else
			{
				ptr = temp;
				if (ptr == NULL)
					break;
				temp = temp->next;
			}
		}
	}
	return -1;
}
