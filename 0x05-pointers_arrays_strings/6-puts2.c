#include "main.h"

/**
 * puts2 - entry point
 * Description - print every other character of a string
 * @str: variable used
 * Return: nothing
 */
void puts2(char *str)
{
	int len = 0;
	int z;

	while (str[len] != 0)
	{
		len++;
	}
	for (z = 0; z < len; z++)
	{
		if (z % 2 == 0)
		{
			_putchar(str[z]);
		}
	}
	_putchar('\n');
}
