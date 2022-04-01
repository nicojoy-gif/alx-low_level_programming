#include <stdlib.h>
#include <stdio.h>


/**
 * main - check the code
 * Description - multiply two numbers
 * @argc: argument used
 * @argv: argument used
 * Return: int
 */
int main(int argc, char *argv[])
{
	int n1;
	int n2;
	int i;
	int product;

	product = 0;

	for (i = 0; i < argc; i++)
	{
		if (!*argv[i] == '\0')
		{
		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);
		product = n1 * n2;
		}
		else
		{
			printf("Error\n");
		}
	}
	printf("%d\n", product);

	return (1);
}
