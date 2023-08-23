#include "main.h"
/**
 *puts2 - This function prints everyother character of a string starting with
 *starting with the first character
 *@str: data input
 *
 *Return: 0
 */
void puts2(char *str)
{
	int length = 0;
	int j = 0;
	char *x = str;
	int y;

	while (*x != '\0')
	{
		x++;
		length++;
	}
	j = length - 1;
	for (y = 0; y <=j; y++)
	{
		if (y % 2 == 0)
		{
			_putchar(str[y]);
		}
	}
	_putchar('\n');
}
