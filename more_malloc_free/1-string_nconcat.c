#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: limit
 * 
 * Return: string concatened
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concatString;
	unsigned int lenght = n, index;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (index = 0; s1[index]; index++)
		lenght++;

	concatString = malloc(sizeof(char) * (lenght + 1));

	if (concatString == NULL)
		return (NULL);

	lenght = 0;

	for (index = 0; s1[index]; index++)
		concatString[lenght++] = s1[index];

	for (index = 0; s2[index] && index < n; index++)
		concatString[lenght++] = s2[index];

	concat[lenght] = '\0';

	return (concatString);
}
