#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list.
 * @h: value of the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	unsigned int count = 0;

	if (h == NULL)
		return (0);

	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%u] (nil)\n", h->len);
		else
			printf("[%u] %s\n", h->len, h->str);

		count += 1;
		h = h->next;
	}

	return (count);
}
