#include <stdlib.h>
#include <stdio.h>

/**
 * main - check the code
 * Description - multiplies two numbers
 * @argc: variable used
 * @argv: variable used
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;
	int n1;
	int n2;
	int product = 0;


	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			n1 = atoi(argv[1]);
			n2 = atoi(argv[2]);
			product = n1 * n2;
		}
		printf("%d\n", product);
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
