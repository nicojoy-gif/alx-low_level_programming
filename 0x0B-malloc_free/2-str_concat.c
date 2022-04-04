#include "main.h"
#include <stdlib.h>

/**
 * *str_concat - entry point
 * Description - concatenate two strings
 * @s1: character used
 * @s2: character used
 * Return: char
 */
char *str_concat(char *s1, char *s2)
{
	int n1, n2, n3, i;
	char *a, *empt;

	empt = "";
	if (s1 == NULL)
		s1 = empt;
	if (s2 == NULL)
		s2 = empt;
	i = n1 = n2 = 0;
	while (s1[n1] != '\0')
	{
		n1++;
	}
	while (s2[n2] != '\0')
	{
		n2++;
	}
	n2++;
	a = malloc((n1 + n2) * sizeof(*s1));
	if (a == NULL)
		return (NULL);
	i = 0;
	while (i < n1)
	{
		a[i] = s1[i];
		i++;
	}
	n3 = 0;
	while (n3 <= n2)
	{
		a[i] = s2[n3];
		i++;
		n3++;
	}
	return (a);
}
