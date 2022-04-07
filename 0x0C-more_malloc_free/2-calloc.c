#include "main.h"
#include <stdlib.h>

/**
 * *_calloc - entry point
 * Description -allocate memory for an array
 * @nmemb: integer used
 * @size: integer used
 * Return: nothing
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *t;
	unsigned int count;

	if (nmemb == 0 || size == 0)
		return (NULL);
	t = malloc(nmemb * size);
	if (t == NULL)
		return (NULL);
	count = 0;
	while (count < nmemb * size)
	{
		t[count] = 0;
		count++;
	}
	return (t);
}
