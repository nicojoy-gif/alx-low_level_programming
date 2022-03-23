#include "main.h"

/**
 * _strcat - entry point
 * Description - it concatenate two strings
 * @dest: variable used
 * @src: variable used
 * Return: Always 0
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (dest[i] != '\0')
	{
		++i;
	}
	for (j = 0; src[j] != '\0'; ++j, ++i)
	{
		dest[i] = src[j];
	}
	dest[i] = '\0';
	return dest;
}
	
