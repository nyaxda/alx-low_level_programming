#include <stddef.h>
#include "main.h"

/**
 * clear_bit - sets a bit at a position to 1
 * @n: number to be used
 * @index: index to be set
 *
 * Return: 1 on success, -1 on fail
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (n == NULL || (index > (sizeof(unsigned long int) * 8) - 1))
		return (-1);
	*n &= ~(1 << index);
	return (1);
}
