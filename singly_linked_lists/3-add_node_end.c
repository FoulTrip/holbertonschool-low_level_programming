#include "lists.h"
#include <string.h>

/**
 * add_node_end - Adds a new node at the end of a list_t list.
 * @head: A pointer the head of the list_t list.
 * @str: The string to be added to the list_t list.
 *
 * Return: Always 0.
 */

list_t *add_node_end(list_t **head, const char *str)
{
	char *clon;
	int lenght;
	list_t *new, *last;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	clon = strdup(str);

	if (str == NULL)
	{
		free(new);
		return (NULL);
	}

	for (lenght = 0; str[lenght];)
		lenght++;

	new->str = clon;
	new->len = lenght;
	new->next = NULL;

	if (*head == NULL)
		*head = new;
	else
	{
		last = *head;
		while (last->next != NULL)
			last = last->next;
		last->next = new;
	}

	return (*head);
}
