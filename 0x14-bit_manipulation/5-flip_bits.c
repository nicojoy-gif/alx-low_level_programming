#include "main.h"
/**
 * countSetBits - function to count set  bits
 * @n: unsigned long int type
 * Return: success
 */
unsigned int countSetBits(unsigned long int n)
{
	unsigned int count = 0;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}
	return (count);
}
/**
 * flip_bits - function to return number of bits
 * @n: unsigned long int
 * @m: unsigned long int
 * Return: success
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	return (countSetBits(n ^ m));
}
