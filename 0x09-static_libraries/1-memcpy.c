#include "main.h"

/**
 * _memcpy - function copies memory are from src to dest memory area
 * @dest: destinationmemory area
 * @src: source memory area
 * @n: input
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}
