#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * main - prints all arguments it receives.
 *
 * Description: program that prints prints all arguments it receives.
 *@argc: no. of arguments passed to the program
 *@argv:argument vector of pointers to strings
 *
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int i = 0;
	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
}
