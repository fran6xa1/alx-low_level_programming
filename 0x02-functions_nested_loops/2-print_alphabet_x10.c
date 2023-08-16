#include "main.h"

/**
 * print_alphabet_x10 - this function is used to print 10 lines of the alphabet
 *
 * return: void
 */
void print_alphabet_x10(void)
{
	int j;

	for (j = 0; j < 10; j++)
	{
		char alpha = 'a';

		while (alpha <= 'z')
		{
			_putchar(alpha);
			alpha++;
		}
		_putchar('\n');
	}
}
