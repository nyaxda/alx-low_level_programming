#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * print_chessboard -  prints the chessboard.
 *
 * Description: function that prints the chessboard.
 *
 *@a: pointer to a char
 *
 * Return: void
 */
void print_chessboard(char (*a)[8])
{
	size_t i = 0;
	size_t j = 0;

	while (i < 8)
	{
		j = 0;
		while (j < 8)
		{
			putchar(a[i][j]);
			j++;
		}
		putchar('\n');
		i++;
	}
}
