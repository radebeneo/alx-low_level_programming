#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - returns the sum of all the paramters.
 * @n: the number of paramters passed to function.
 * @...: variable number of paramters to calculate the sum of.
 * Return: 0, if n == 0.
 * Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, sum;

	sum = 0;

	va_start(ap, n);

	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
