#include "main.h"

/**
 * flip_bits - gets the number of bits to flip to get from n to m
 * @n: initial number in consideration
 * @m: final number in consideration
 *
 * Return: the number of flipped bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int flipped = n ^ m;
	int count = 0;

	while (flipped)
	{
		if (flipped & 1)
			count++;
		flipped  >>= 1;
	}
	return (count);
}
