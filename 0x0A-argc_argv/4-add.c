#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#include "main.h"

/**
 * main - adds positive numbers.
 *
 * Description: program that adds positive numbers. If
 * no number is passed to the program, print 0, followed
 * by a new line.
 * If one of the number contains symbols that are not
 * digits, print Error, followed by a new line, and return 1.
 *
 *@argc: no. of arguments passed to the program
 *@argv:argument vector of pointers to strings
 *
 * Return: 0 on success, 1 on error.
 */

int main(int argc, char *argv[])
{
	int i;
	unsigned int n, sum = 0;
	char *endpointer;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		n = strtoul(argv[i], &endpointer, 10);

		if (*endpointer == '\0' && argv[i][0] != '-')
		{
			sum += n;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0);
}
