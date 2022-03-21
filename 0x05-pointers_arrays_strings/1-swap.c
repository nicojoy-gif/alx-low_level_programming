#include "main.h"

/**
 * swap_int - entry point
 * Description: a function that swaps the value of two integers
 * @a: variable used
 * @b: variable used
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}
