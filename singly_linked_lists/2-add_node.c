#include "lists.h"
#include <string.h>

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: Pointer to head
 * @str: string of node
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	char *clon;
	int lenght;
	list_t *new;

	new = malloc(sizeof(list_t));

	if (new == NULL)
		return (NULL);

	clon = strdup(str);

	if (clon == NULL)
	{
		free(new);
		return (NULL);
	}

	for (lenght = 0; str[lenght];)
		lenght++;

	new->str = clon;
	new->lenght = lenght;
	new->next = *head;

	*head = new;

	return (new);
}
