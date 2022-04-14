#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_numbers - print numbers followed by a new line
 * @separator : character used
 * @n: integer used
 * Return: Always successful
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list pr;
	unsigned int i;

	va_start(pr, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(pr, int));
		if (separator != NULL && (i < (n - 1)))
		printf("%s", separator);
	}
	va_end(pr);
	printf("\n");
}
