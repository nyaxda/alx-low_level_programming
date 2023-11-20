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
	struct node listint_t *ptr = NULL;
	ptr = h;
	if (h = NULL)
	{
		printf ("0");
	}
	else
	{
		while (h != NULL)
		{
			count++;
			h = h->next;
		}
	}
	return (count);
}
