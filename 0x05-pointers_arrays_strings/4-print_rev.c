#include "main.h"
/**
 *print_rev - This is a function that prints a string in reverse
 *@s: string printed
 *
 * return: 0
 */
void print_rev(char *s)
{
	int length = 0;
	int j;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	s--;
	for (j = length; j > 0; j--)
	{
		putchar(*s);
		s--;
	}

	putchar('\n');
}
