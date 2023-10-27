#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - prints the number of arguments passed into it.
 *
 * Description: program that prints the number of arguments passed into it.
 *
 *@argc: no. of arguments passed to the program
 *@argv:argument vector of pointers to strings
 *
 * Return: 0 on success
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	int i;
	int a = strlen(argv[0]);
	int count = 0;

	for (i = 0; i < a; i++)
	{
		count++;
	}
	printf("%d\n", count - 1);
	_putchar('\n');

	return (0);
}
