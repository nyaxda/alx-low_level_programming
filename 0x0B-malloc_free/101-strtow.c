#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * strtow - splits a string into words.
 * Description: function that splits a string into words.
 * Each element of this array contains a single word,
 * null-terminated. The last element of the returned array
 * is NULL. Words are separated by spaces
 *
 *@str: pointer to a string.
 *
 * Return: NULL if str = NULL or str = "".
 *If the function fails, it returns NULL.
 */
char **strtow(char *str)
{
	char **m;
	int i, j, k, count;

	if (str == NULL || str[0] == '\0')
	{
		return (NULL);
	}
	count = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ')
		{
			count++;
			while (str[i] != ' ' && str[i] != '\0')
			{
				i++;
			}
		}
	}
	m = (char **)malloc((count + 1) * sizeof(char *));
	if (m == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < count; i++)
	{
		m[i] = malloc(strlen(str) * sizeof(char));
		if (m[i] == NULL)
		{
			for (k = 0; k < i; k++)
			{
				free(m[k]);
			}
			free(m);
			return (NULL);
		}
	}
	for (i = 0; i < count; i++)
	{
		for (j = 0; j < strlen(str); j++)
		{
			if (str[j] != ' ')
			{
				m[i][j] = str[j];
			}
			else
			{
				break;
			}
		}
	}
	return (m);
}
