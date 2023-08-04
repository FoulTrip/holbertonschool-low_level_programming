#include "lists.h"

/**
 * print_dlistint - prints all the elements of a list
 * @h: list
 *
 * Return: elemets of list
 */
size_t print_dlistint(const dlistint_t *h)
{
	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		count++;
	}

	return (count);
}
