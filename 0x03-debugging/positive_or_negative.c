#include <stdio.h>
#include "main.h"

/**
 *positive_or_negative - this function checks if a program is positive or neg
 *@i: the number the check is performed on
 *
 *Return: 0 Always
 */
void positive_or_negative(int i)
{
	if (i > 0)
	{
		printf("%d is positive.\n", i);
	}
	else if (i < 0)
	{
		printf("%d is negative.\n", i);
	}
	else
	{
		printf("%d is zero.\n", i);
	}
}
