#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *n1 = head;
	listint_t *n2 = head;

	if (!head)
		return (NULL);

	while (n1 && n2 && n2->next)
	{
		n2 = n2->next->next;
		n1 = n1->next;
		if (n2 == n1)
		{
			n1 = head;
			while (n1 != n2)
			{
				n1 = n1->next;
				n2 = n2->next;
			}
			return (n2);
		}
	}
	return (NULL);
}
