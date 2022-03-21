#include "main.h"

/**
 * reset_to_98 - entry point
 * Description: a function that takes a pointer to an int and update to 98
 * @n: variable used
 * Return: nothing
 */
void reset_to_98(int *n)
{
	int p;

	p = 98;
	*n = p;
	_putchar(*n);
	_putchar('\n');
}
