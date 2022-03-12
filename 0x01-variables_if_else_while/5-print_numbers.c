#include <stdio.h>
/**
* main - A program that prints all single digit number
* of base 10 followed by a new line
* Return: Always 0 (Success)
*/
int main(void)
{
	int num;
	int d;
	int temp;

	scanf("%d", &num);

	while (temp > 0)
	{
		d = num % 10;
		num = num / 10;
		printf("%d\n", d);
	}
	return (0);
}
