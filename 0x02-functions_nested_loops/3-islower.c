#include <stdio.h>
#include "main.h"

/**
 * _islower - entry point
 * Description: checks for lowercase,
 * if c is lowercase return 1
 * @c: variable used
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	c = 'c';

	if (_islower(c))
	{
		_putchar(1);
		return (1);
	}
		else
		{
			_putchar(0);
			return (0);
		}
	return (0);
}
