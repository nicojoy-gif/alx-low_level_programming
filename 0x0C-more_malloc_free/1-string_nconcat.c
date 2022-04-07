#include "main.h"
#include <stdlib.h>

/**
 * *string_nconcat - entry point
 * Description - concatenate two strings
 * @s1: chracter used
 * @s2: character used
 * @n: integer used
 * Return: char
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int n1, n2;
	int sign = n;
	char *a;
	int len1, len2;

	if (s1 == 0)
		s1 = "";
	if (s2 == 0)
		s2 = "";
	for (len1 = 0; s1[len1] != '\0'; len1++)
		;
	for (len2 = 0; s2[len2] != '\0'; len2++)
		;
	if (sign >= len2)
	{
		sign = len2;
		a = malloc(sizeof(char) * (len1 + len2 + 1));
	}
	else
		a = malloc(sizeof(char) * (len1 + n + 1));
	if (a == NULL)
		return (NULL);
	for (n1 = 0; n1 < len1; n1++)
	{
		a[n1] = s1[n1];
	}
	for (n2 = 0; n2 < sign; n2++)
	{
		a[n1++] = s2[n2];
	}
	a[n1++] = '\0';
	return (a);
}


