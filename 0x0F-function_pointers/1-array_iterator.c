#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - it executes a function given as a parameter on each array
 * @array: array used
 * @size: variable used
 * @action: variable used
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int count;

	if (action == NULL)
		return;
	if (size <= 0)
		return;
	if (array == NULL)
		return;

	for (count = 0; count < size; count++)
	{
		action(array[count]);
	}
}
