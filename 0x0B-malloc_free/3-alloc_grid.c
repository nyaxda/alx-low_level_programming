#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 *
 * Description: function that returns a pointer to a 2
 * dimensional array of integers.
 *
 *@width: width of the array.
 *@height: height of the array.
 *
 * Return: NULL on failure. If width or height is 0 or
 * negative, return NULL.
 */
int **alloc_grid(int width, int height)
{
	int **m;
	int i, j, k;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	m = malloc(height * sizeof(int *));

	if (m == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		m[i] = malloc(width * sizeof(int));

		if (m[i] == NULL)
		{
			return (NULL);
			for (k = 0; k < i; k++)
			{
				free(m[k]);
			}
			free(m);
		}
		for (j = 0; j < width; j++)
		{
			m[i][j] = 0;
		}
	}

	return (m);
}
