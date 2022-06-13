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
	int i;
	int d;

	d = 0;
	while (dest[d] != '\0')
	{
		d++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[d + i] = src[i];
	}
	if (i < n)
	{
		dest[d + i + 1] = src[i];
		dest[d + i + 1] = '\0';
	}
	return (dest);
}
