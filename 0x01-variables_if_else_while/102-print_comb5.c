#include <stdio.h>
/**
 * main- this progrom prints all possible comination of two two-digit numbers
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;

	while (i <= 99)
	{
		int j = 0;

		while (j <= 99)
		{
			if (i <= j)
			{
				putchar((i / 10) + '0');
				putchar((j % 10) + '0');
				putchar(' ');
				putchar((j / 10) + '0');
				putchar((j % 10) + '0');
				if (i != 98 || j != 99)
				{
					putchar(',');
					putchar(' ');
				}
			}
			j++;
		}
		i++;
	}
	return (0);
}
