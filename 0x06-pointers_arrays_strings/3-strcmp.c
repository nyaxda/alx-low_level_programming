#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strcmp - compares two strings.
 * Description: function that compares two strings.
 *
 *@s1: pointer to a char
 *@s2: pointer to a char
 *
 *
 * Return: concantenated string (char*)
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}
