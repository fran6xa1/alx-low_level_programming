#include "main.h"
/**
*print_line - This function prints a straight line
*@n:parameter
*
*Return:returns nothing
*/
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
