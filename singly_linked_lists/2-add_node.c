#include "lists.h"

/**
 * lenght_string - lenght of string
 * @str: string
 *
 * Return: lenght of string
 */
int lenght_string(const char *str)
{
	int count;
	
	if (str == NULL)
		return (0);
	for (count = 0; str[count] != '\0'; count++)
		;
	return (count);
}

/**
 * add_node - function that adds a new node at the beginning of a list_t list.
 * @head: Pointer to head
 * @str: string of node
 *
 * Return: address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new_node = (list_t *) malloc(sizeof(list_t));

	if (new_node == NULL)
		return (NULL);
	new_node->str = strdup(str);
	new_node->len = lenght_string(str);
	new_node->next = (*head);
	(*head) = new_node;
	return (*head);
}
