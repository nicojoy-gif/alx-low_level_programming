#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters.
 * @n: The number of paramters passed to the function.
 * @...: variable number of parameter
 * Return: if n == 0 - 0.
 *          Otherwise - the sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list pr;
	unsigned int i, sum = 0;

	va_start(pr, n);
	for (i = 0; i < n; i++)
		sum += va_arg(pr, int);
	va_end(pr);
	return (sum);
}
