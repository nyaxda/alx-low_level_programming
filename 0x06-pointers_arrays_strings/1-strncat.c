#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strncat - concatenates two strings.
 * Description: function similar to the _strcat function, except that
 * it will use at most n bytes from src; and
 * src does not need to be null-terminated if it contains n or more bytes
 *
 *@dest: pointer to a char
 *@src: pointer to a char
 *@n: integer variable
 *
 * Return: concantenated string (char*)
 */
char *_strncat(char *dest, char *src, int n)
{
	char *origin = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (n > 0 && *src != '\0')
	{
		{
			*dest = *src;
			dest++;
			src++;
			n--;
		}
		*dest = '\0';
	}
		return (origin);
}
