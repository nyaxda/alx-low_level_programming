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
	size_t j = 0, k = 0, length = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	if (ac == 1) 
	{
    	str = malloc(strlen(av[0]) + 1);
    	if (str == NULL) 
		{
      		return (NULL);
    	}
		strcat(str, av[0]);
    	return (str);
	}

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
		length++;
	}

	str = (char *)malloc((length + 1));
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
		}
		else
		{
			str[k] = av[i][j];
		}
	}
	str[k] = '\0';
	return (str);
}
