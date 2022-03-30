#include "main.h"

/**
 * _pow_recursion - entry point
 * Description - returns the value of x raised to power of y
 * @x: variable used
 * @y: variable used
 * Return: Always int
 */
int _pow_recursion(int x, int y)
{
	if (y > 0)
	{
		return (x * _pow_recursion(x, y - 1));
	}
	else
	{
		return (-1);
	}
}
