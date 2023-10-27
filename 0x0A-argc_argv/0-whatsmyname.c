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

int main (__attribute__((unused)) int argc, char *argv[])
{
	char modified_name[1024];

	ssize_t len = readlink("/proc/self/exe", modified_name, sizeof(modified_name) - 1);

	if (len != -1)
	{
		modified_name[len] = '\0';
	}

	if (strcmp(argv[0], modified_name) != 0)
	{
		argv[0] = modified_name;
	}
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}
