#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * print_diagsums -  prints the sum of the
 * two diagonals of a square matrix of integers.
 *
 * Description: function prints the sum of
 * the two diagonals of a square matrix of integers.
 *
 *@a: pointer to a int
 *@size: pointer to a int
 *
 * Return:  pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 *
 */
void print_diagsums(int *a, int size)
{
	int rows = sizeof(a) / sizeof(a[0]);
	int cols = sizeof(a[0]) / sizeof(a[0][0]);
	int sum = 0;
	int i, j;
	
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			if (i == j)
			{
				sum += a[i][j];
			}
		}
	}
}