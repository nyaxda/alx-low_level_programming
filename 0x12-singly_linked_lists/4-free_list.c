#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * free_list - frees a list
 * @head: head variable
 *
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *temporary;

	for (temporary = head; temporary != NULL; head = temporary)
	{
		temporary = head->next;
		free(head->str);
		free(head);
	}
}
