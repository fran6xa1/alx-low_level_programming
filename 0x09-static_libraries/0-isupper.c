#include "main.h"
/**
*_isupper - function that verifies if a  character is uppercase or not
*@c: character being tested
*
*Return: returns 1 if it is uppercase , 0 if it is not
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
