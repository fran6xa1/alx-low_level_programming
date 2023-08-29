#include "main.h"

/**
 * _strstr - A function that locates a substring
 * @haystack: input string
 * @needle: substring
 * Return: 0
 */
char *_strstr(char *haystack, char *needle)
{
	if (haystack == NULL || needle == NULL)
	{
		return NULL;
	}
	while (*haystack)
	{
		char *a = haystack;
		char *b = needle;

		while (*b && (*a == *b))
		{
			a++;
			b++;
		}
		if (*b == '\0')
		{
			return haystack;
		}
		haystack++;
	}
	return (NULL);
}
