#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"


/**
 * main - prints the result of the operation.
 * @argc: number of arguments passed to the program
 * @argv: array of pointers to the arguments
 *
 * Description: program that prints the result of the operation,
 * followed by a new line.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int a, b, result;
	int (*op_func)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}

	a = atoi(argv[1]);
	b = atoi(argv[3]);
	op_func = get_op_func(&argv[2][0]);

	if (op_func == NULL)
	{
		printf("Error\n");
		return (99);
	}

	if ((*argv[2] == '/' || *argv[2] == '%') && b == 0)
	{
		printf("Error\n");
		return (100);
	}

	result = op_func(a, b);
	printf("%d\n", result);

	return (0);
}
