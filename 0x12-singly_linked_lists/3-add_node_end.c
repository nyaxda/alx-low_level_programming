#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds node at end
 * @head: head node
 * @str: string to add to new node
 * Return: address of new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *node1 = malloc(sizeof(list_t));
	list_t *last_node;

	if (node1 == NULL)
	{
		return (NULL);
	}

	node1->str = strdup(str);
	if (node1->str == NULL)
	{
		free(node1);
		return (NULL);
	}

	node1->len = strlen(str);
	node1->next = NULL;

	if (*head == NULL)
	{
		*head = node1;
	}
	else
	{
		last_node = *head;
		while (last_node->next != NULL)
		{
			last_node = last_node->next;
		}
		last_node->next = node1;
	}

	return (node1);
}
