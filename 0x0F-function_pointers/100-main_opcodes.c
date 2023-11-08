#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the opcodes of its own main function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 on success, 1 if the argument count is not correct,
 * 2 if the number of bytes is negative
 */
int main(int argc, char *argv[])
{
	int bytes, i;
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	bytes = atoi(argv[1]);

	if (bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	ptr = (char *)main;

	for (i = 0; i < bytes; i++)
	{
		printf("%02hhx", ptr[i]);
		if (i < bytes - 1)
			printf(" ");
	}

	printf("\n");

	return (0);
}
