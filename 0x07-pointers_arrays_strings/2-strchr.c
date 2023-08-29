#include "stdio.h"

/**
 * _strchr - This function locates a character in a string
 * @s: string
 * @c: character input
 * Return: 0 Always
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i= 0; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (s +i);
	}
	return (NULL);
}
