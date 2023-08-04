#include "lists.h"

/**
 * dlistint_len -  returns the number of elements in a linked list
 * @h: list
 *
 * Return: number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	int count = 0;

	while (h)
	{
		count++;
		printf("%d\n", h->n);
		h = h->next;
	}
	return (count);
}
