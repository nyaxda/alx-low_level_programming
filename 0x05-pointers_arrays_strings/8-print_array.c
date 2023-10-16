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
	for (i = 0; i < n; i++)
	{
		int j = a[i];
		char str[20];
		snprintf(str, sizeof(str), "%d", j);
		for (j = 0; j < strlen(str); j++)
		{
			_putchar(str[j]);
		}
	if (i < (n - 1))
	{
		_putchar(',');
		_putchar(' ');
	}
	}
}
