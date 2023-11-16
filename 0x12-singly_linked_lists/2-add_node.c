#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node
 * @head: head node
 * @str: string
 * Return: returns an address of new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *node1 = malloc(sizeof(list_t));

	if (node1 == NULL)
	{
		return NULL;
	}

	node1->str = strdup(str);
	node1->len = strlen(str);
	node1->next = *head;
	*head = node1;

	return (node1);
}
