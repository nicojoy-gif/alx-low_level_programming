#include "main.h"

/**
 * puts_half - entry point
 * Description: prints half of a string
 * @str: variable used
 * Return: nothing
 */
void puts_half(char *str)
{
	int i = 0;
	int n;

	while (str[i] != '\0')
	{
		i++;
	}
	if (i % 2 == 0)
	{
		for (n = i / 2; str[n] != 0; n++)
		{
			_putchar (str[n]);
		}
	}
	else
	{
		for (n = (i - 1) / 2; n < i - 1; n++)
		{
			_putchar (str[n + 1]);
		}
	}
	_putchar ('\n');
}
