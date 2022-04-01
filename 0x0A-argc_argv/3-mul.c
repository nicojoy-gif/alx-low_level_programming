#include "main.h"
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
	(void) argc;

	if (argv[1] && argv[2])
	{
		printf("%d\n", atoi(argv[1]) * atoi(argv[2]));
	}
	else
	{
		printf("Error\n");
	}
	return (1);
}
