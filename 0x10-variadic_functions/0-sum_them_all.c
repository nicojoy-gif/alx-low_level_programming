#include "variadic_functions.h"
#include <stdlib.h>
#include <stdarg.h>

/**
 * sum_them_all - returns sum of all its parameter
 * @n: integer used
 * Return: 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, count;

	va_start(ap, n);
	count = 0;
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
	{
		count += va_arg(ap, int);
	}
	va_end(ap);
	return (count);
}
