#include "main.h"

/**
 * _strpbrk - entry point
 * Description - search a string for any set of byte
 * @s: variable used
 * @accept: variable used
 * Return: char pointer
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j;

	for (i = 0; s[i]; i++)
	{
		for  (j = 0; accept[j]; j++)
		{
			if (s[i] == accept[j])
				break;
		}
			if (accept[j])
				return (s + i);
	}
	return (0);
}
