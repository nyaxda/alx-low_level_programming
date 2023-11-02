#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * string_nconcat -  concatenates two strings.
 *
 * Description: concatenates two strings.
 *
 *@s1: pointer to a string
 *@s2: pointer to a string
 *@n: int no. of bytes to copy from s2.
 *
 * Return:  point to a newly allocated space in memory,
 * which contains s1, followed by the first n
 * bytes of s2, and null terminated. If the function fails, it returns NULL.
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *m;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	m = malloc(strlen(s1) + n + 1);
	if (m == NULL)
	{
		return (NULL);
	}
	if (n >= strlen(s2))
	{
		n = strlen(s2);
	}

	{
		for (i = 0; i < strlen(s1); i++)
		{
			m[i] = s1[i];
		}
		for (j = 0; j < n; j++)
		{
			m[i + j] = s2[j];
		}
		m[i + j] = '\0';
	}
	return (m);
}
