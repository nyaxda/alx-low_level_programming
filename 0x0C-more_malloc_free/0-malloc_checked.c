#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * malloc_checked -  allocates memory using malloc.
 *
 * Description: function that callocates memory using malloc.
 *
 *@b: size of the memory to allocate.
 *
 * Return:  pointer to the allocated memory. if malloc fails,
 * the malloc_checked function should
 * cause normal process termination with a status value of 98
 *
 */
void *malloc_checked(unsigned int b)
{
	void *m = malloc(b);
	if (m == NULL)
	{
		exit(98);
	}
	else
	{
		return (m);
	}
}
