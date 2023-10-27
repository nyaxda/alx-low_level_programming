#include <stdio.h>
#include <stdlib.h>
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
	int i, status, n;
	int sum = 0;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < argc; i++)
	{
		status = (sscanf(argv[i], "%d", (unsigned int *)&n) == 1);
		if (status == 1)
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
