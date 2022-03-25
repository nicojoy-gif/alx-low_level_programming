#include "main.h"

#define LEETIN "aAeEoOtTlL"
#define LEETOUT "4433007711"
/**
 * leet - entry point
 * Description - it encodes a string into 1337
 * @s: variable used
 * Return: char pointer
 */
char *leet(char *s)
{
	char *ret = s, *leetin = LEETIN, *leetout = LEETOUT;
	int i = 0;

	for (; *s; s++)
	{
		for (i = 0; leetin[i]; i++)
			if (*s == leetin[i])
				*s = leetout[i];
	}
	return (ret);
}
