#include "main.h"

/**
 * flip_bits - Counts the number of bits needed to flip to get from one number
 * to another.
 * @num1: The first unsigned long int number.
 * @num2: The second unsigned long int number.
 *
 * Return: The number of bits needed to flip.
 */
unsigned int flip_bits(unsigned long int num1, unsigned long int num2)
{
	unsigned int bit_diff = 0;

	while (num1 > 0 || num2 > 0)
	{
		if ((num1 & 1) != (num2 & 1))
			bit_diff++;

		num1 >>= 1;
		num2 >>= 1;
	}

	return (bit_diff);
}
