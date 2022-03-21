#include "main.h"

/**
 * _puts - entry point
 * Description - a function that prints a string, followed by a new line, to stdout.
 * @str: variable used
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
