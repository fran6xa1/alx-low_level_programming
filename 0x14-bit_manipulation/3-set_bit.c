#include "main.h"

/**
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to an unsigned long int.
 * @index: The index of the bit to set.
 *
 * Return: 1 if it succeeds, -1 if it fails.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int mask;

	if (index > 63)
		return (-1);

	mask = 1UL << index;
	*n |= mask;

	return (1);
}
