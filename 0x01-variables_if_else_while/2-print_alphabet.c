#include <stdio.h>

/**
* main - entry point 
* Description - prints the alphabets in lowercase followed by a newline
* Return: Always zero (0)
*/
int main(void)
{
	for(int x = 'A'; x <= 'Z'; x++)
	{
		int lower_x = tolower(x);
		putchar(lower_x);
	}
	return (0);
}
