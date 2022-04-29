#include "main.h"
/**
 * get_endianness - function to check endianness  of  machine
 * Return: always success
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *)&i;

	if (*c)
		return (1);
	else
		return (0);
}
