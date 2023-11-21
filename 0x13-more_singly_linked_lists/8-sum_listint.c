#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * sum_listint - sums all the data of a listint_t linked list.
 *
 * @head: head node of a listint_t list.
 *
 * Return: sum of all the data of the listint_t list,
 * 0 if the list is empty.
*/
int sum_listint(listint_t *head)
{
	listint_t *ptr;
	int total;

	if (!head)
	{
		return (0);
	}
	ptr = head;
	while (ptr)
	{
		total += ptr->n;
		ptr = ptr->next;
	}
	return (total);
}
