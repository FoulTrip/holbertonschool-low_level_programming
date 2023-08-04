#include "lists.h"

/**
 * free_dlistint - frees a list.
 * @head: pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *temp;

	while (head)
	{
		tmp = head->next;
		free(head);
		head = tmp;
	}
}
