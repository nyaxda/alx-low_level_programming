#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 *
 * Description: function returns a pointer to a new string
 * which is a duplicate of the string str.
 * Memory for the new string is obtained with malloc,
 * and can be freed with free.
 *
 *@str: pointer to a string.
 *
 * Return: NULL if str = NULL. On success, the _strdup function returns
 * a pointer to the duplicated string. It returns NULL if insufficient
 *
 */
char *_strdup(char *str)
{
	if (str == NULL)
	{
		return (NULL);
	}

	char *m = malloc(strlen(str) + 1);
	unsigned int i;
	
	for (i = 0; i < strlen(str); i++)
	{
		m[i] = str[i];
	}
	return (m);
}

