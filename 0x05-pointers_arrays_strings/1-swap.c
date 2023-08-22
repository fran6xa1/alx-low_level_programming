#include "main.h"
/**
 *swap_int - this functionswaps the value of two integers 
 * @a: firat integer to swap
 * @b: second integer to swap
 *
 */
void swap_int(int *a, int *b)
{
	int z;

	z = *a;
	*a = *b;
	*b = z;
}
