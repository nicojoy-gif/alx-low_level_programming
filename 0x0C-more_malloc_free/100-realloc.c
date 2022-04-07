#include "main.h"
#include <stdlib.h>

/**
 * *_realloc - entry point
 * Description - reallocate a memory block using malloc and free
 * @ptr: variable used
 * @old_size: ineger used
 * @new_size: integer used
 * Return: nothing
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *s;

	if (new_size > old_size)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL)
	{
		s = malloc(new_size);
		free(ptr);
		return (s);
	}
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	return (ptr);
}

