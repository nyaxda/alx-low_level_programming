#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint2 - frees a listint_t list
 *
 * @head: pointer to head pointer of the listint_list
 *
 * Return: void
*/
void free_listint2(listint_t **head)
{
	listint_t *ptr;

	if (*head == NULL)
	{

	}
	else
	{
		while (*head)
		{
			ptr = *head;
			*head = (*head)->next;
			free(ptr);
		}
	}
}
