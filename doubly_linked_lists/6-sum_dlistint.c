#include "lists.h"

/**
 * jsum_dlistint - sum of all the data (n) of a linked list.
 * @head: pointer
 *
 * Return: sum of all dates
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum = head->n;
		head = head->next;
	}

	return (sum);
}
