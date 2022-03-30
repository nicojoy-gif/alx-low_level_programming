#include "main.h"

/**
 * factorial - entry point
 * Description - returns factorial of a given number
 * @n: variable used
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
