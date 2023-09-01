#include "main.h"

/**
 *_strcmp - This is a function that compare two strings
 *@s1: first string compared
 *@s2: seond string compared
 *
 *Return: 0 if s1 == s2
 *        -ve number if s1 < s2
 *        +ve number if s1 > s2
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 != '\0' || *s2 != '\0')
	{
		if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
		s1++;
		s2++;
	}
	return (0);
}
