#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * *create_array - entry point
 * Description - it creates an array of chars
 * @size: variable used
 * @c: character used
 * Return: null if size = 0 else return a pointer
 *
 */
char *create_array(unsigned int size, char c)
{
	char *ar;
	unsigned int i;

	i = 0;
	if (size != 0)
		ar = malloc(size * sizeof(c));
	else
		return (NULL);
	if (ar == NULL)
		return (NULL);
	while (i < size)
	{
		ar[i] = c;
		i++;
	}
	return (ar);
}
