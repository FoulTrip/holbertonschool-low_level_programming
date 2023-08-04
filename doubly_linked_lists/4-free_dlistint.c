#include "lists.h"
#include <stdlib.h>

/**
 * free_dlistint - frees a list.
 * @head: A pointer to the list_t list.
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *current = head;

	while (current != NULL)
	{
		dlistint_t *next = current->next;

		free(current);
		current = next;
	}
}
