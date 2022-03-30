#include "main.h"

/**
 * _sqrt_recursion - entry point
 * Description - returns the natural square root of a number
 * @n: variable used
 * Return: int
 */
int _sqrt_recursion(int n)
{
	return (halp(n, 1));
}

/**
 * halp - helper function to solve _sqrt_recursion
 * @c: variable used
 * @i: variable used
 * Return: square root if natural square root, or -1 if none found
 */
int halp(int c, int i)
{
	int square;

	square = i * i;
	if (square == c)
		return (i);
	else if (square < c)
		return (halp(c, i + 1));
	else
		return (-1);
}
