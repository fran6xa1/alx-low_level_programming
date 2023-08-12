#include <stdio.h>

/**
 * main - prints all possible combination of 3 digits
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;
	int d;

	for (c = 29; c <= 37; c++)
	{
		for (d = c + 1; d <= 38; d++)
		{
			putchar(c);
			putchar(d);
			if (c == 29 && d == 38)
				continue;
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');
	return (0);
}
