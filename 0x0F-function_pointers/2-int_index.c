#include <string.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index -  searches for an integer.
 *
 * Description: function that searches for an integer.
 *
 * @array: array of integers
 * @size: number of elements in the array array.
 * @cmp: function pointer to be used to compare values.
 *
 * Return:  void
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	if (array && size && cmp)
	{
		size_t i;
		if (size <= 0)
		{
			return (-1);
		}
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) != 0)
			{
				return (i);
			}
		}
	}
	return (-1); /*return -1 when no element matches or when size <= 0*/
}
