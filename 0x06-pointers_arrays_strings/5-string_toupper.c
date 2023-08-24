#include "main.h"

/**
 **string_toupper - this function changes all lower case letters of a string
 *to upper
 *str: parameter used
 *
 * Return:returns uppercase character
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		*ptr = toupper(*ptr);
		ptr++;
	}
	return str;
}
