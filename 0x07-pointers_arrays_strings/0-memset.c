#include "main.h"

/**
 * _memset - entry point
 * Description - function that fills memory with a constant byte
 * @s: character used
 * @b: character used
 * @n: integer used
 * Return: a char pointer
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}

