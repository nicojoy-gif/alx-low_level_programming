#include "main.h"

/**
 * string_toupper - entry point
 * Description - changes all lowercase letter to uppercase
 * @name: variable used
 * *: variable
 * Return: Always 0
 */
char *string_toupper(char *name)
{
	char *s = name;

	while (*name)
	{
		*name = (*name > 'a' && *name <= 'z') ? *name - 32 : *name;
		name++;
	}
	name = '\0';
	return (s);
	return (0);
}

