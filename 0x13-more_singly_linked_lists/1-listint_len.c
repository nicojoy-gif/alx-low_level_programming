#include "lists.h"
#include <stddef.h>

/**
 * listint_len - returnd the number of elements in a linked list
 * @h: variable used
 * Return: Always 0.
 */
size_t listint_len(const listint_t *h)
{
	int count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
