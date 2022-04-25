#include "lists.h"
#include <stddef.h>
#include <stdlib.h>

/**
 * add_nodeint - adds a new node at beginning of a list
 * @head: pointer used
 * @n: integer used
 * Return: Always 0
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *top = NULL;

	top = malloc(sizeof(listint_t));
	if (top == NULL)
		return (NULL);
	top->n = n;
	top->next = *head;
	*head = top;
	return (*head);
}
