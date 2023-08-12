#include <stdlib.h>
#include <stdio.h>
#include <time.h>
/**
 *main- This program assigns a random number to the variable n
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	int n = rand();
	int finaldigit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	finaldigit = n % 10;
	        printf("Final digit of %d is %d ", n, finaldigit);
	if (finaldigit > 5)
		printf("finaldigit and is greater than 5\n");
	else if (finaldigit == 0)
		printf("finaldigit and is equal to 0\n");
	else
		printf("finaldigit and is less than 6 and not 0\n");
	return (0);
}
