#include <stdio.h>
#include <stlib.h>
#include <string.h>
#include "lists.h"
/**
 * print_list - printa all the elements of a list_t list
 *
 * Description: a function that prints all the elements of a list_t list.
 *
 * @h: number of arguments
 *
 * Return: number of nodes
*/
size_t print_list(const list_t *h);
{
	int count = 0;

	struct node *h = head;
	while (h != NULL)
	{
		count++
		h = h->next;
	}

	return (count)
}
