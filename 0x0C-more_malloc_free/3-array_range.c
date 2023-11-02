#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * array_range -  creates an array of integers.
 *
 * Description: function that creates an array of integers.
 * The array created contains all the values from min
 * (included) to max (included), ordered from min to max.
 *
 *@min: min value of the array.
 *@max: max value of the array.
 *
 * Return:the pointer to the newly created array. If min > max, return NULL.
 * If malloc fails, return NULL
 */
int *array_range(int min, int max)
{
	int *m, i;

	if (min > max)
	{
		return (NULL);
	}

	m = malloc((max - min + 1) * sizeof(int));

	if (m == 0)
	{
		return (NULL);
	}

	else
	{
		for (i = 0; i <= max - min; i++)
		{
			m[i] = min + i;
		}
	}
	return (m);
}
