#include <stdio.h>

/**
 * main - a program that prints the first 50 fibonacci number
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	long i = 0;
	long j = 1;
	int n = 0;
	long fib;

	while (n < 50)
	{
		fib = j + i;
		if (n != 49)
			printf("%ld, ", fib);
		else
			printf("%ld\n", fib);
		i = j;
		j = fib;
		n += 1;
	}
	return (0);
}
