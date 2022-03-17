#include "main.h"

/**
 * more_numbers - entry point
 * Desscription: it prints 0 to 10 followed by a new line
 * Return: nothing
 */
void more_numbers(void)
{
	int i;
	int n;

	for (i = 0; i <= 9; i++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
			{
				_putchar('1');
			}
			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
