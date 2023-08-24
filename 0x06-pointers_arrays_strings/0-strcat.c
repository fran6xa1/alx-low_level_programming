#include "main.h"

/**
 * _strcat - THis function concatenates two strings
 *@src: string to be concatenated upon
 *@dest: string that will be appended
 *
 *Return: @dest
 */
char *_strcat(char *dest, char *src)
{
	char *conclusion = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (conclusion);
}
