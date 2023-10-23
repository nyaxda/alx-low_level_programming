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
		int rows = size, cols = size, sum_1 = 0;
		int sum_2 = 0, i, j, number, divisor = 1;

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
while (divisor * 10 <= number)
{
		divisor *= 10;
}
while (divisor > 0)
{
		_putchar ((number / divisor) + '0');
		number %= divisor;
		divisor /= 10;
}
_putchar(',');
_putchar(' ');
if (sum_2 < 0)
{
		_putchar('-');
		sum_2 = -sum_2;
}
number = sum_2;
divisor = 1;
while (divisor * 10 <= number)
{
		divisor *= 10;
}
while (divisor > 0)
{
		_putchar ((number / divisor) + '0');
		number %= divisor;
		divisor /= 10;
}
_putchar('\n');
}
