#include "main.h"

/**
 * _isupper - entry point
 * Description: checks for uppercase
 * @c: variable used
 * Return: int
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
