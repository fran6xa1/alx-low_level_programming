#include <stdio.h>
/**
 *main- This program prints alphabets from a to z
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
		if (alpha != 'q' && alpha != 'e')
			putchar(alpha);

	putchar('\n');
	return (0);
}
