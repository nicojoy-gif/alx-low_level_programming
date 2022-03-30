#include "main.h"

/**
 * _puts_recursion - entry point
 * Description - prints a string followed by a new line
 * @s: variable used
 * Return: nothing
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
		_putchar('\n');
	}
}