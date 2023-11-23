#include "main.h"

/**
 * get_bit - gets the value of a bit at a given index
 * @n: the number
 * @index: index staring from 0 of the bit required
 *
 * Return: value
 */

{
	if (index > 63)
		return (-1);
	return ((n >> index) & 1);
}
