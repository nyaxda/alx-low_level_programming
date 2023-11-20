#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint - frees a listint_t list
 *
 * @head: head of the listint_list
 *
 * Return: void
*/
void free_listint(listint_t *head)
{
	listint_t *ptr;
	if (head == NULL)
	{
		return (-1);
	}
	while (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
