#include "function_pointers.h"

/**
 * int_index - this function searches for an integer
 * @array: array search is performed in
 * @size: size of teh array
 * @cmp: pointer to the comparing function
 * Return: index of the first element for which the cmp function
 * does not return 0. If there is no match or size is negative
 * return -1
 */
int int_index(int *array, int size,int (*cmp)(int))
{
	int i;

	if (array && cmp)
	{
		for (i = 0; i < size; i++)
		{
			if (cmp(array[i]) !=0)
			    return (i);
		}
	}
	return (-1);
}
