#include "main.h"

/**
 * _strncpy - entry point
 * Description - copies a string
 * @dest: variable used
 * @src: variabe used
 * @n: variable used
 * Return: Always 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}
	for ( ; i < n; i++)
		dest[i] = '\0';
	return (dest);
}
