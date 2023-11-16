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
#include "lists.h"
#include <stdio.h>
struct node
{
    int data;
    struct node *next;
};
list_t *head = NULL;
list_t *current = NULL;

size_t print_list(const list_t *h);
size_t print_list(const list_t *h)
{
	int count = 0;

	const list_t *current = h;
	while (current != NULL)
	{
		count++;
		current = current->next;
	}
	return (count);
}
