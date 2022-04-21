#include <stddef.h>
#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees a list_t list
 * @head: start of the list
 */
void free_list(list_t *head)
{
	list_t *tmp;

	if (head == NULL)
		return;
	for (; head;)
	{
		tmp = head;
		head = head->next;
		free(tmp->str);
		free(tmp);
	}
}
