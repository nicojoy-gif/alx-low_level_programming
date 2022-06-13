#include "main.h"

/**
 * _strcmp - entry point
 * Description - it compares two string
 * @s1: variable used
 * @s2: variable
 * Return: Always 0
 */
int _strcmp(char *s1, char *s2)
{
	while ((*s1 != '\0' && *s2 != '\0') && *s1 == *s2)
	{
		s1++;
		s2++;
	}

	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
}
