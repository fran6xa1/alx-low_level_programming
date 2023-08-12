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
	int finaldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	finaldigit = n % 10;
	if (finaldigit > 5)
	{
		printf("and is greater than 5\n");
	}
	else if (finaldigit == 0)
	{
		printf("and is equal to 0\n");
	}
	else
	{
		printf("and is less than 6 and not 0\n");
	}
	return (0);
}
