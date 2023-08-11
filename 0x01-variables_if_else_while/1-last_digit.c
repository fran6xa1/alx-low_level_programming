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

	srand (time(0));
	n = rand() - RANDMAX / 2;
	int lastDigit = n % 10;

	printf("The string Last digit of %d is ", n);

	if (lastDigit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (lastDigit == 0)
	{
		printf("and is 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}

	return (0);
}
