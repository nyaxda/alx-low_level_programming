#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * _strcat - concatenates two strings.
 * Description: function appends the src string to the dest string,
 * overwriting the terminating null byte (\0) at the end of dest,
 * and then adds a terminating null byte
 *
 *@dest: pointer to a char
 *@src: pointer to a char
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	char *origin = dest;
	size_t i;

	while (*dest != '\0')
	{
		dest++;
	}
	for (i = 0; src[i] != '\0'; i++)
	{
		*dest = src[i];
		dest++;
	}

	*dest = '\0';

	return (origin);
}
