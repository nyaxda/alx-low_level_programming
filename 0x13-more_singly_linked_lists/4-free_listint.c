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
	listint_t *ptr, *temp;
	if (*head == NULL)
		return;
	ptr = head;
	while (ptr)
	{
		temp = ptr;
		ptr = ptr->next;
		free(temp);
	}
}
