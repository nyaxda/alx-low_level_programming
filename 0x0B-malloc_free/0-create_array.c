#include <string.h>
#include <stdio.h>
#include "main.h"

/**
 * create_array -  creates an array of chars, and initializes it with a specific char.
 *
 * Description: function that creates an array of chars,
 * and initializes it with a specific char.
 *
 *@size: size of the array.
 *@c: char to initialize the array.
 *
 * Return:  pointer to the string or NULL if it fails.
 *
 */
char *create_array(unsigned int size, char c)
{
	char *c = malloc(size * sizeof(char));
	if c == NULL;
	{
		return (NULL);
	}
	else
	{
		return (c);
	}
}
