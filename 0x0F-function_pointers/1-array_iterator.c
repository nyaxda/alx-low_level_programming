#include <string.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator -  executes a function given as
 * a parameter on each element of an array.
 *
 * Description: function that executes a function given
 * as a parameter on each element of an array.
 *
 * @size: size of the array
 * @action: function pointer
 * @array: array of integers
 *
 * Return:  void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array && size && action)
	{
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}
	}
}
