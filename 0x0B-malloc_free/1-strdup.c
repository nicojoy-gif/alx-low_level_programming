#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * *_strdup - entry point
 * Description - returns a pointer to a new space in a memory
 * @str: string used
 * Return: null if str = null else return pointer
 */
char *_strdup(char *str)
{
	char *str2;
	unsigned int i, len;

	if (str == NULL)
	{
		return (NULL);
	}
	i = len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	len++;
	str2 = malloc(len * sizeof(*str));
	if (str2 == NULL)
		return (NULL);
	while (i <= len)
	{
		str2[i] = str[i];
		i++;
	}
	return (str2);
}


