#include <stdio.h>
/**
* main - main block
* a program that prints all possible different combinations of 3 digits
* Description: The three digits must be different
* Print only the smallest combination of 3 digits
* Numbers should be printed in ascending order, with three digits
* You can only use the putchar function six times maximum in your code
* You are not allowed to use any variable of type char
* Return: Always 0 (sucess)
*/
int main(void)
{
	int i, j, k, l;

	for (i = 0; i < 1000; i++)
	{
		j = i / 100;
		k = (i / 10) % 10;
		l = i % 10;

		if (j < k && k < l)
		{
			putchar(j + '0');
			putchar(k + '0');
			putchar(l + '0');

			if (i < 700)
			{
				putchar(44);
				putchar(32);
			}
		}


	}
	putchar('\n');
	
	return (0);
}

