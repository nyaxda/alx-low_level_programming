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
	size_t j = 0, k, length;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	if (ac < 2)

	for (i = 0; i < ac; i++)
	{
		if (av[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0; av[i][j] != '\0'; j++)
		{
			length++;
		}
	}

	str = (char *)malloc((length + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	for (i = j = k = 0; k < length; i++, k++)
	{
		if (av[i][j] == '\0')
		{
			str[k] = '\n';
			j = 0;
			i++;
			k++;
		}
		if (k < length - 1)
		{
			str[k] = av[i][j];
		}
	}
	str[k] = '\0';
	return (str);
}
