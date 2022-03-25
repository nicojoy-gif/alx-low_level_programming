#include "main.h"

/**
 * string_toupper - entry point
 * Description - changes all lowercase letter to uppercase
 * @c: variable sed
 * Return: Always c
 */
char *string_toupper(char *c)
{
	int i;

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] > 96 && c[i] < 123)
		{
			c[i] -= 32;
		}
	}
	return (c);
}
