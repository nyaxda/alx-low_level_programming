#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - multiplies two numbers.
 *
 * Description: program that print the result of the multiplication,
 * followed by a new line.
 * If the program does not receive two arguments,
 * the program prints Error, followed by a new line, then return 1.
 *
 *@argc: no. of arguments passed to the program
 *@argv:argument vector of pointers to strings
 *
 * Return: 0 on success
 */

int main(__attribute__((unused)) int argc, char *argv[])
{
	if (argvc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
		return (0);
	}
	return (0);
}
