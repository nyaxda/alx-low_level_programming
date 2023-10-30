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
	char *aout;
	int c, i, j, out;

	if (ac == 0)
		return (NULL);

	for (c = i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
			return (NULL);

		for (j = 0; av[i][j] != '\0'; j++)
			c++;
		c++;
	}

	aout = malloc((c + 1) * sizeof(char));

	if (aout == NULL)
	{
		free(aout);
		return (NULL);
	}

	for (i = j = out = 0; out < c; j++, out++)
	{
		if (av[i][j] == '\0')
		{
			aout[out] = '\n';
			i++;
			out++;
			j = 0;
		}
		if (out < c - 1)
			aout[out] = av[i][j];
	}
	aout[out] = '\0';

	return (aout);
}
