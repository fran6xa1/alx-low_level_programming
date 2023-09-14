#include "function_pointers.h"

/**
 * array_iterator - executes a function given as a parameter
 * for each element of an array
 * @array: array to iterate over
 * @action: pointer to function used
 * @size: size of teh array
 */
void array_iterato(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
