#include "variadic_functions.h"

/**
 * sum_them_all - This function returns the summ of all parameters given
 * @n: represents the number of arguments
 * Return: Always 0.
 */
int sum_them_all(const unsigned int n, ...)
{
	/*va_list is created to store the variable argumeent list */

	va_list allNumbers;
	unsigned int i;
	int sum;

	if (n == 0)
		return (0);
	sum = 0;

	/* use va_start to initialize the number of arguments in va_list */
	va_start(allNumbers, n);

	/* use for loop to access all arguments stored in va_list */
	for (i = 0; i < n; i++)
		sum += va_arg(allNumbers, int);
	va_end(allNumbers);
	return (sum);
}
