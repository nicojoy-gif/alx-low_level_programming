#include <stdio.h>

/**
 * main - entry point
 * Description - prints the name of the file it was compiled from
 * Return: void
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
