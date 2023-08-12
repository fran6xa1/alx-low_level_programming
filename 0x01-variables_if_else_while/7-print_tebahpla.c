#include <stdio.h>
/**
 *main- This program prints alphabets from z to a
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'z'; alpha >= 'a'; alpha--)
		putchar(alpha);

	putchar('\n');
	return (0);
}
