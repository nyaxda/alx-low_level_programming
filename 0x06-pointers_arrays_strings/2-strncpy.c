#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strncpy - copies a string.
 * Description: function that copies a string.
 *
 *@dest: pointer to a char
 *@src: pointer to a char
 *@n: integer variable
 *
 * Return: concantenated string (char*)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for (; i < n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
