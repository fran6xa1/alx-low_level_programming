#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main- This program assigns a random number to the variable n
 *
 *Return: 0 (Success)
 */
int main(void)
{
	int n = rand();

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	int finalDigit = n % 10;
	if (finalDigit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (finalDigit == 0)
	{
		printf("and is equal to 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
