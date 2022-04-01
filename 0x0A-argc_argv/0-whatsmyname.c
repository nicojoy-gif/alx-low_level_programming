#include <stdio.h>

/** main - check the code
 * Description - a program that prints its name followed by a new line
 * Return: int
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
	printf("%s\n", argv[i]);
	}
	return 0;
}
