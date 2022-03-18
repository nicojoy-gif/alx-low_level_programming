#include "main.h"

/**
 * print_square - entry point
 * Description: print square
 * @size: variable used
 * Return: nothing
 */
void print_square(int size)
{
	int files;
	int columns;

	if (size > 0)
		for (files = 0; files < size; files++)
		{
			for (columns = 0; columns < size; columns++)
			{
				_putchar('0');
			}
			_putchar('\n');
		}
	else
	{
		_putchar('\n');
	}
}
