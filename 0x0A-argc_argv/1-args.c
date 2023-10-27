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

int main(int argc, __attribute__((unused)) char *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
