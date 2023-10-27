#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
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
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i, flag, status, n;
	int sum = 0;

	if (argc < 2)
	{
		printf("Error\n");
		return (1);
	}
	for (i = 1; i < argc; i++)
	{
		status = sscanf (argv[i], "%d", &n);
		if (status == 1)
		{
			sum += atoi(argv[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", sum);
	return (0)
}
