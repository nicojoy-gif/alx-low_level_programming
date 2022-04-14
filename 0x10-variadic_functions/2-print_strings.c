#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_strings - print strings followed by a new line
 * @separator: charcter used
 * @n: ineger used
 * Return: Always success
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list pr;
	unsigned int i;
	char *test;

	va_start(pr, n);
	for (i = 0; i < n; i++)
	{
		test = va_arg(pr, char*);
		if (test)
		{
			printf("%s", test);
		}
		else
			printf("(nil)");
		if (separator != NULL && (i < (n - 1)))
			printf("%s", separator);
	}
	va_end(pr);
	printf("\n");
}
