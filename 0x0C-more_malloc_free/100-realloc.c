#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _realloc -  creates reallocates a memory block using malloc and free.
 *
 * Description: function that reallocates a memory block using malloc and free.
 * The contents are copied to the newly allocated space,
 * in the range from the start of ptr up
 * to the minimum of the old and new sizes.
 * If new_size > old_size, the “added” memory should not be initialized.
 * If new_size == old_size do not do anything and return ptr.
 * If ptr is NULL, then the call is equivalent to malloc(new_size),
 * for all values of old_size and new_size.
 * If new_size is equal to zero, and ptr is not NULL,
 * then the call is equivalent to free(ptr).
 *
 *
 *@ptr: pointer to the memory previously allocated with a call to malloc.
 *@old_size: old size of the allocated space for ptr in bytes.
 *@new_size: new size of the new memory block in bytes.
 *
 * Return: NULL.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *n, *p, *m;
	unsigned int i;

	if (new_size == old_size)
	{
		return (ptr);
	}

	n = ptr;
	m = malloc(sizeof(*n) * new_size);

	if (m == NULL)
	{
		return (NULL);
	}

	if (new_size < old_size)
	{
		for (i = 0; i < new_size; i++)
		{
			m[i] = ((char *)ptr)[i];
		}
	}

	if (new_size > old_size)
	{
		for (i = 0; i < old_size; i++)
		{
			m[i] = ((char *)ptr)[i];
		}
	}
	if (ptr == NULL)
	{
		m = malloc(new_size);
		return (m);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (m);
}
