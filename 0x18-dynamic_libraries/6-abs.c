#include "main.h"

/**
 * _abs - entry point
 * Description: it computes the absolute value of an integer
 *@n: parameter
 * Return: Always 0 (Success)
 */
int _abs(int n)
{
	if (n < 0)
	{
		n = (-1) * n;
	}
	return (n);
}
