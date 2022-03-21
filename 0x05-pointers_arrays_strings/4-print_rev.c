#include "main.h"

/**
 * print_rev - entry point
 * Description - print a string in reverse
 * @s: variable used
 * Return: nothing
 */
void print_rev(char *s)
{
	int i = 0;
	int total_character = 0;
	int c = 0;

	while (s[i] != 0)
	{
		i++;
	}
	total_character =  i - 1;

	for (c = 0; c <= total_character; c++)
	{
		_putchar(s[total_character - c]);
	}
	_putchar('\n');
}
