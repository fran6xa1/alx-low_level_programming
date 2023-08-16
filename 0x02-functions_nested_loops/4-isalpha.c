#include "main.h"

/**
 *_isalpha - This program returns 1 if c is a letter, lower case or upper case
 * @c : the character checked
 *
 * Return: 1 if the character is a letter, lower case or upper case
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}
