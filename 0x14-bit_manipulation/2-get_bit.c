#include "main.h"

/**
 * get_bit - Returns the value of a bit at a given index.
 * @num: The unsigned long integer input.
 * @idx: The index of the bit.
 *
 * Return: Value of the bit or -1 if an error occurs.
 */
int get_bit(unsigned long num, unsigned int idx)
{
	unsigned int bit_pos;

	if (idx >= 64)
		return (-1);

	bit_pos = 1;

    /* Shift the bit to the desired position and extract it */
	bit_pos <<= idx;

	if (num & bit_pos)
		return (1);
	else
		return (0);
}
