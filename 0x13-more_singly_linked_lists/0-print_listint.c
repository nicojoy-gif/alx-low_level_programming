#include <stdio.h>
#include "lists.h"

/**
 * print_listint - prints all elements of a list
 * @h: variable used
 * Return: int
 */
size_t print_listint(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}
	return (count);
}
