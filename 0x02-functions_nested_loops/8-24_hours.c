#include "main.h"
/**
 *jack_bauer - This function prints every minute of the day
 *
 *Returns: 0
 */
void jack_bauer(void)
{
	int m, hr;

	for (hr = 0; hr <= 23; hr++)
	{
		for (m = 0; m <= 59; m++)
		{
			_putchar((hr / 10) + '0');
			_putchar((hr % 10) + '0');
			_putchar(':');
			_putchar((m / 10) + '0');
			_putchar((m % 10) + '0');
			_putchar(10);
		}
	}
}
