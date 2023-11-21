#include <stdio.h>
#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_listint_safe - frees a list
 * @h: the pointer to the start of list to free
 * Return: size of free'd list (in nodes?)
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *node;

	if (h == NULL || *h == NULL)
	{
		return count;
	}
	while (*h != NULL)
	{
		if (*h > (*h)->next)
		{
			node = (*h)->next;
			free(*h);
			*h = node;
		}
		else
		{
			node = *h;
			*h = NULL;
			free(node);
		}
		count++;
	}
	return (count);
}
