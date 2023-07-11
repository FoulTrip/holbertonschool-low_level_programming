#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * create_array - creates an array of chars, 
 *                and initializes it with a specific char.
 * @size: lenght of array
 * @c: input character
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int iterator;
	char *s;

	s = (char *) malloc(size * sizeof(char));
	if (s == NULL)
		return (NULL);
	for (a = 0; a < size; a++)
		s[a] = c;

	return (s);
}
