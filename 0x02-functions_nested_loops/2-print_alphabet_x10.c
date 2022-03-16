#include <stdio.h>
#include "main.h"

/**
* print_alphabet_x10 - this prints alphabet in lower case x10
* followed by a new line
* Desciption: use void print_alphabet_x10(void)
*/

void print_alphabet_x10(void) /* this is the function used */
{
	char ch;
	int i;

	for (i = 0; i < 10; i++)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
	_putchar('\n');
	}
}
