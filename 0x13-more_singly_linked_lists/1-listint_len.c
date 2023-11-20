#include <stdio.h>
#include <stdlib.h>
#include "lists.h"

/**
 * listint_len - returns number of elements in a linked listint_t list.
 *
 * @h - elements of a listint_t list
 *
 * Return: number of elements.
*/
size_t listint_len(const listint_t *h)
{
	size_t count = 0;
	const listint_t *ptr = NULL;

	ptr = h;
	if (ptr == NULL)
	{
		return (0);
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
