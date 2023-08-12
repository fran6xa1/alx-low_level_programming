#include <stdio.h>
/**
 *main- This program prints common letters from a to z and capital letters A Z
 *
 *Return: Always 0 (Success)
 */
int main(void)
{
	char commonletters, capitalletters;

	for (commonletters = 'a'; commonletters <= 'z'; commonletters++)
		putchar(commonletters);

	for (capitalletters = 'A'; capitalletters <= 'Z'; capitalletters++)
		putchar(capitalletters);

	putchar('\n');
	return (0);
}
