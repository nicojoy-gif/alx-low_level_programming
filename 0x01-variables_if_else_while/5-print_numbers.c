#include <stdio.h>

/**
* main -prints all single digit of a base 10
* followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i = 1 + i)
	{
		printf("%d", i);
	}
	putchar('\n');
	return (0);
}

