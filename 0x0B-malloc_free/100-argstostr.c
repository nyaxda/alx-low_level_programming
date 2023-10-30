#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * argstostr - concatenates all the arguments of my program.
 *
 * Description: function that concatenates all the arguments of my program.
 *
 *@ac: number of arguments.
 *@av: pointer to an array of pointers.
 *
 * Return: void.
 */
char *argstostr(int ac, char **av)
{
	char *str;
	int i;
	size_t j;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	if (ac < 2)

	str = malloc(ac * sizeof(char) + 1);

	for (i = 0; i < ac; i++)
	{
		str[i] = av[i];
	}
	return (str);
}
