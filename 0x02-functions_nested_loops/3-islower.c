#include "main.h"

/**
 * _islower - This is a function that checks for lower case letters
 * @c: the integer is the argument
 *
 * Return: 1 if c is lower case
 *         0 if c is upper case
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1); /*the charqacter is lower case*/
	}
	else
	{
		return (0); /*the character is not lower case*/
	}
}
