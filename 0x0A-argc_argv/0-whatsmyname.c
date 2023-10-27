#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - prints its name, followed by a new line.
 *
 * Description: program that prints its name, followed by a new line.
 * If you rename the program, it will print the new name,
 * without having to compile it again
 *
 *@argc: no. of arguments passed to the program
 *@argv:argument vector of pointers to strings
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[]) {
	char *name = strrchr(argv[0], '/');
	if (name == NULL)
	{
		name = argv[0];
	}
	else
	{
		name++;
	}

	printf("%s\n", name);

	return 0;
}
