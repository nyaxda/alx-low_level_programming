#include <stdio.h>
#include <stdlib.h>

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
	while (head != NULL)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
