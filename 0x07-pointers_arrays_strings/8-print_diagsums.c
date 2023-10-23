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
	int rows = size;
	int cols = size;
	int sum_1 = 0;
	int sum_2 = 0;
	int i, j;
	int number, number_2;

	if (rows != cols)
	{
		return;
	}

	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			if (i == j)
			{
				sum_1 += a[i * cols + j];
			}
			if (i + j == rows - 1)
			{
				sum_2 += a[i * cols + j];
			}
		}
	}

if (sum_1 < 0)
{
	_putchar('-');
	sum_1 = -sum_1;
}
number = sum_1;
while (number > 0)
{
	number_2 = number % 10;
	_putchar(number_2 + '0');
	number /= 10;
}

_putchar(',');
_putchar(' ');

if (sum_2 < 0)
{
	_putchar('-');
	sum_2 = -sum_2;
}

number = sum_2;
while (number > 0)
{
	number_2 = number % 10;
	_putchar(number_2 + '0');
	number /= 10;
}
_putchar('\n');
}
