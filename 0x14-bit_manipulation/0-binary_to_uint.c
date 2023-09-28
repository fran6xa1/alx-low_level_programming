#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @binary: The binary string to convert.
 *
 * Return: The equivalent unsigned int.
 */
unsigned int binary_to_uint(const char *binary)
{
	unsigned int result = 0;
	int length = 0;
	int power_of_two = 1;

	if (!binary)
		return (0);

	/* Calculate the length of the binary string */
	while (binary[length] != '\0')
		length++;

	/* Start from the rightmost bit and calculate the decimal value */
	for (length--; length >= 0; length--, power_of_two *= 2)
	{
		if (binary[length] != '0' && binary[length] != '1')
			return (0);

		if (binary[length] == '1')
			result += power_of_two;
	}

	return (result);
}
