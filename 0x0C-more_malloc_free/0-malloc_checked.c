#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - entry point
 * Description - it allocates memory using malloc
 * @b: integer used
 * Return: nothing
 */
void *malloc_checked(unsigned int b)
{
	unsigned int *ptr;

	ptr = malloc(b);

	if (ptr == NULL)
		exit(98);
	return (ptr);
}
