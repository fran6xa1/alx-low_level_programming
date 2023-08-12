#include <stdio.h>

/**
 *main- This code prints all possible combination of a single digit number
 *
 *Return: Always 0 (Successful)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
		if (a < 9)
		{
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
