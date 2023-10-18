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
	char *origin = dest;

	while (n > 0 && *src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
		n--;
	}
	return (origin);
}