#include "search_algos.h"

/**
 * min - Returns the minimum of two values
 * @a: The first value
 * @b: The second value
 *
 * Return: The minimum value between @a and @b
 */
size_t min(size_t a, size_t b)
{
	if (a > b)
		return (b);
	return (a);
}

/**
 * jump_search - Searches for a value in a
 * sorted array using jump search algorithm
 *
 * @array: Pointer to the first element of the array
 * @size: Number of elements in the array
 * @value: Value to search for
 *
 * Return: Index of the value if found, -1 otherwise
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, start;

	if (array == NULL)
		return (-1);
	step = sqrt(size);
	prev = 0;

	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev = step;
		step += sqrt(size);
		if (prev >= size)
			return (-1);
	}
	if (prev != 0)
	{
		start = prev - (size_t)sqrt(size);
		printf("Value found between indexes [%lu] and [%lu]\n", start, prev);
	}
	else
	{
		start = 0;
		printf("Value found between indexes [0] and [%lu]\n", prev);
	}
	while (start < min(step, size))
	{
		printf("Value checked array[%lu] = [%d]\n", start, array[prev]);
		if (array[start] == value)
			return (start);
		start++;
	}
	return (-1);
}
