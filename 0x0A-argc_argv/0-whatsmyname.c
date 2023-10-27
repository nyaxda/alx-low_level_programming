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

int main(__attribute__((unused)) int argc, char *argv[]) {
	char *name = strrchr(argv[0], '/');
	if (name == NULL)
	{
		name = argv[0];
	}
	else
	{
		name++;
	}
	char path[4096];
	if (readlink("/proc/self/exe", path, sizeof(path)) == -1)
	{
		perror("readlink");
		return 1;
	}

	path[sizeof(path) - 1] = '\0';

	if (strcmp(path, argv[0]) == 0)
	{
		printf("./%s\n", name);
	}
	else
	{
		printf("%s\n", argv[0]);
	}

	return 0;
}
