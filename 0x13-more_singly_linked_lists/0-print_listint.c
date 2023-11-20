#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a listint_t list
 *
 * @h - elements of a listint_t list
 *
 * Return: number of nodes
*/
size_t print_listint(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = NULL;
	ptr = h;
	if (ptr == NULL)
	{
		printf ("0");
	}
	else
	{
		while (ptr != NULL)
		{
			count++;
			ptr = ptr->next;
		}
	}
	return (count);
}
