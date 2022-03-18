#include "main.h"

/**
 * print_diagonal - entry oint
 * Description: it draws a diagonal line on the treminal
 * @n: variable used
 * Return: nothing
 */
void print_diagonal(int n)
{
	int files;
	int columns;

	if (n > 0)
	{
		for (files = 0; files < n; files++)
		{
			for (columns = 0; columns <= files; columns++)
			{
				if (files == columns)
				{
					_putchar ('\\');
					_putchar ('\n');
				}
				else
				{
					_putchar (' ');
				}
			}
		}
	}
	else
	{
		_putchar ('\n');
	}
}
