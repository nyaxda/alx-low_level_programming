#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * reverse_array - reverses the content of an array of integers.
 * Description: function that reverses the content of an array of integers.
 *
 *@a: pointer to an integer
 *@n: integer variable
 *
 *
 * Return: void.
 */
void reverse_array(int *a, int n)
{
	int i;
	int temp;

	i = 0;

	while (i < (n / 2))
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
		i++;
	}
}
