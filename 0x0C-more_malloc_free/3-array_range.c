#include "main.h"
#include <stdlib.h>

/**
 * *array_range - entry point
 * Description - creates an array of integer
 * @min: integer used
 * @max: integer used
 * Return: int
 */
int *array_range(int min, int max)
{
	int *p;
	int a;

	if (min > max)
		return (NULL);
	p = malloc(sizeof(int) * (max - min + 1));
	if (p == NULL)
		return (NULL);
	a = 0;
	while (min <= max)
	{
		p[a] = min;
		min++;
		a++;
	}
	return (p);
}
