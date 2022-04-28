#include "main.h"
#include <stdio.h>
/**
 * binary_to_uint - converts a binary number to integer
 * @b: character used
 * Return: success
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int k = 1;
	unsigned int i = 0;
	int x;

	if (b == NULL)
		return (0);
	x = 0;
	while (b[x] != '\0')
	{
		if (b[x] != '0' && b[x] != '1')
		{
			return (0);
		}
		i <<= 1;
		if (b[x] == '1')
		{
			i ^= k;
		}
		x++;
	}
	return (i);
}
