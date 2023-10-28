#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 **_strcpy - copies the string pointed to by src, including the
 *terminating null byte (\0), to the buffer pointed to by dest.
 *Description: a function that copies the string pointed to by src to dest.
 *
 *@dest: char pointer variable
 *@src: char pointer variable
 *
 * Return: void
 */
char *_strcpy(char *dest, char *src)
{
	size_t i;

	for (i = 0; i < strlen(src); i++)
	{
		dest[i] = src[i];
	}
	dest[strlen(src)] = '\0';
	return (dest);
}
