#include "main.h"

/**
 * _strlen - entry point
 * Descrription - it returns the length of a string
 * @s: variable used
 * Return: int
 */
int _strlen(char *s)
{
	int c = 0;

	while (*s != '\0')
	{
		c++;
		s++;
	}
	return (c);
}
