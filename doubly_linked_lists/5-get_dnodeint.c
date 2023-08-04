#include "lists.h"

/**
 * get_dnodeint_at_index -  returns the nth node of a linked list.
 * @head: pointer
 * @index: input
 *
 * Return: node
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	int count = 0;

	while (head != NULL)
	{
		if (count == index)
			return (head);
		count++;
		head = head->next;
	}

	return (NULL);
}
