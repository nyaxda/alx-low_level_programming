#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 *print_array - prints n elements of an array of integers, then a new line.
 *Description: a function that prints n elements of an array of integers.
 *
 *@a: integer pointer variable
 *@n: integer variable
 *
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;
	int j;
	size_t k;
	char str[20];

	for (i = 0; i < n; i++)
	{
		j = a[i];

		snprintf(str, sizeof(str), "%d", j);
		for (k = 0; k < strlen(str); k++)
		{
			_putchar(str[k]);
		}
	if (i < (n - 1))
	{
		_putchar(',');
		_putchar(' ');
	}
	}
	_putchar('\n');
}
