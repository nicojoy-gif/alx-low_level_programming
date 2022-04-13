#include "3-calc.h"
#include <stdio.h>

/**
 * op_add - add sum of a and b
 * @a: integer used
 * @b: integer used
 * Return: int
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - substract a from b
 * @a: integer used
 * @b: integer used
 * Return: int
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - multiply a and b
 * @a: int used
 * @b: int used
 * Return: int
 */
int op_mul(int a, int b)
{
	return (a * b);
}
/**
 * op_div - divide a and b
 * @a: int used
 * @b: int used
 * Return: int
 */
int op_div(int a, int b)
{
	return (a / b);
}
/**
 * op_mod - returns remainder of a by b
 * @a: int used
 * @b: int used
 * Return: int
 */
int op_mod(int a, int b)
{
	return (a % b);
}
