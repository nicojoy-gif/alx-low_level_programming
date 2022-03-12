#include <stdio.h>

/**
* main - print all single digits of base 10
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i = 1 + i)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
