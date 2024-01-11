#include "lists.h"

void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	if (temp == NULL)
		return;
	while (temp != NULL)
	{
		temp = head;
		head = head->next;
		free(temp);
	}
}
