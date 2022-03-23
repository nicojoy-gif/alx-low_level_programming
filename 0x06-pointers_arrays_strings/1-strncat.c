#include "main.h"

/**
 * *_strncat - entry point
 * Description - it concatenate two string
 * @dest: variable used
 * @src: variable used
 * @n: integer used
 * Return: Always 0
 */
char *_strncat(char *dest, char *src, int n)
{
	int d;
	int i;
	
	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	for (i = 0; i < n; i++)
	{
		if (i < n) {
		dest[d + i] = '\0';
		dest[d + i] = src[i];
		}

	return (dest);
	}
	return (0);
}
