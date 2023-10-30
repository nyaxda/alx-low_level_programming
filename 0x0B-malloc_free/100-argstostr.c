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
	int i, j;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	str = malloc(sizeof(char) * ac);
	if (str == NULL)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < ac; i++)
		{
			for (j = 0; j < strlen(av[i]); j++)
			{
				str[i][j] = av[i][j];
			}
			str[i] = *av[i];
		}
	}
	return (str);
}
