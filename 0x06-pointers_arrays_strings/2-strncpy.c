#include "main.h"

/**
 * _strncpy - entry point
 * Description - copies a string
 * @dest: variable used
 * @src: variabe used
 * @n: variable used
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	if (*dest == '\0')
	{
		return ('\0');
	}

	while (*src && n--)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
