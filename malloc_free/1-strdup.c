#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 *            which contains a copy of the string given as a parameter
 * @str: original String
 *
 * Return: copy of string
 */
char *_strdup(char *str)
{
	char *copy;
	int index, copyIndex;

	if (str == NULL)
		return NULL;

	for (index = 0; str[index] != '\0'; index++)
		;

	copy = (char *) malloc((index + 1) * sizeof(char));

	if (copy == NULL)
		return (NULL);

	for (copyIndex = 0; copyIndex < index; copyIndex++)
		copy[copyIndex] = str[copyIndex];

	copy[index + 1] = '\0';

	return (copy);
}
