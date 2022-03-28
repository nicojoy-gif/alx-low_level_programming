#include "main.h"

/**
 * _memcpy -  entry point
 * Description - it copies memory area
 * @dest: variable used
 * @src: variable used
 * @n: integer used
 * Return: char
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];
	return (dest);
}
