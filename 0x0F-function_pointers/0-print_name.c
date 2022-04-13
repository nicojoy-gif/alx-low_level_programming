#include <stdlib.h>
#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - entry point
 * Description - prints a name
 * @f: variabele used
 * @name: character used
 * Return: nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
