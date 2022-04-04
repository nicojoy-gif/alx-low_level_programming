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

	ar = malloc(size * sizeof(c));

	if (size == 0)
	{
		return ("NULL");
	}
	else
	{
		return (ar);
	}
	free(ar);
}

