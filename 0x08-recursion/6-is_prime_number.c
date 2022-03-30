#include "main.h"

/**
 * is_prime_number - entry point
 * Description - check for prime number
 * @n: variable used
 * Return: int
 */
int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else if (n < 4)
	{
		return (1);
	}
	else
	{
		return (hai(n, 2));
	}

}

/**
 * _sqrt - return square root of number
 * @x: variable used
 * @i: number incrementer
 * Return: Square root of x
 */
int _sqrt(int x, int i)
{
	int square;

	square = i * i;
	if (square >= x)
		return (i);
	else
		return (_sqrt(x, i + 1));
}

/**
 * hai - helper function
 * @n: variable used
 * @d: increment divisor
 * Return: 0 if not prime, 1 if primr
 */
int hai(int n, int d)
{
	if (n % d == 0)
		return (0);
	else if (_sqrt(n, 1) < d)
		return (1);
	else
		return (hai(n, d + 1));
}
