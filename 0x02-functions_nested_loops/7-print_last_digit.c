#include "main.h"

/**
 * print_last_digit - entry point
 * Description: prints the last digit of a number
 * @x: variable used
 * Return: int
 */
int print_last_digit(int x)
{
	x %= 10;

	if (x < 0)
		x *= -1;

	_putchar(x + '0');
	return (x);
}
