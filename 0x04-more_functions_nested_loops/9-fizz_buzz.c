#include <stdio.h>

/**
 * main - entry point
 * Description: a program that prints the numbers from 1 to 100,
 * followed by a new line. But for multiples of 3 print fizz
 * Return: 0
 */
int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 15 == 0)
		{
			printf("FizzBuzz ");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz ");
		}
		else if (i % 5 == 0)
		{
			if (i != 100)
			{
				printf("Buzz ");
			}
			else
			{
				printf("Buzz");
			}
		}
		else
		{
			printf("%d", i);
			printf(" ");
		}
	}
	printf("\n");

	return (0);
}

