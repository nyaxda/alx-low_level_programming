#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _calloc -  allocates memory for an array, using malloc.
 *
 * Description: function that allocates memory for an array, using malloc.
 * The memory is set to zero
 *
 *@nmemb: number of elements of the array.
 *@size: size of the array.
 *
 * Return: If nmemb or size is 0, then _calloc returns NULL
 * If malloc fails, then _calloc returns NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *m;
	unsigned int i;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	m = malloc(nmemb * size);

	if (m == NULL)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; i < nmemb * size; i++)
		{
			m[i] = 0;
		}
	}
	return (m);
}
