#include "main.h"

/**
 * _strchr - entry point
 * Description - locates a character in a string
 * @s: variable used
 * @c: variable used
 * Return: pointer if character found andnull if character not found
 */
char *_strchr(char *s, char c)
{
	for (;; s++)
	{
		if (*s == c)
			return (s);
		if (!*s)
			return (0);
	}
	return (0);
}
