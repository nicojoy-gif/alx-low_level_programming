#include "main.h"

/**
 * set_string - entry point
 * Description - set the value of a pointer to char
 * @s: pointer to pointer
 * @to: pointer char
 * Return: nothing
 */
void set_string(char **s, char *to)
{
	*s = to;
}
