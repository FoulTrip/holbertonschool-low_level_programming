#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * _strdup -  returns a pointer to a newly allocated space in memory,
 *            which contains a copy of the string given as a parameter
 * @str: original String
 *
 * Return: copy of string
 */
char* _strdup(char* str)
{
	if (str == NULL)
		return NULL;

	size_t lenght = strlen(str);

	char* copy = (char*)malloc((lenght + 1) * sizeof(char));

	if (copy == NULL)
		return NULL;

	strcpy(copy, str);

	return (copy);
}
