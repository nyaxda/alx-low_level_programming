#include "search_algos.h"

/**
 * binary_search - Searches for a value in a
 * sorted array using the binary search algorithm
 *
 * @array: Pointer to the first element of the array to search in
 * @size: The number of elements in the array
 * @value: The value to search for
 *
 * Return: The index of the value in the array, or -1 if not found
 */
int binary_search(int *array, size_t size, int value)
{
	int low = 0, high = size - 1;
	int mid, i;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");
		mid = low + ((high - low) / 2);
		if (array[mid] == value)
			return (value);
		if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}
	return (-1);
}
