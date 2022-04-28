#include "main.h"
/**
 * get_bit - returns value of bit at a given index
 * @n: integer used
 * @index: unsigned int used
 * Return: success
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int check =  1;

	if (index > sizeof(n) * 8)
		return (-1);
	check <<= index;
	if (check & n)
		return (1);
	else
		return (0);
}
