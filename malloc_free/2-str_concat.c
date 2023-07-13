#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 *
 * Return: concatenated String
 */
char *str_concat(char *s1, char *s2)
{
	int firstIndex, secondIndex;
	char *fnString;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	for (firstIndex = 0; s1[firstIndex] != '\0'; firstIndex++)
	{
	}
	for (secondIndex = 0; s2[secondIndex] != '\0'; secondIndex++)
	{
	}

	fnString = (char *) malloc(((firstIndex + secondIndex) + 1) * sizeof(char));

	if (fnString == NULL)
		return (NULL);

	for (firstIndex = 0; s1[firstIndex] != '\0'; firstIndex++)
	{
		fnString[firstIndex] = s1[firstIndex];
	}
	for (secondIndex = 0; s2[secondIndex] != '\0'; secondIndex++)
	{
		fnString[firstIndex] = s2[secondIndex];
		firstIndex++;
	}

	return (fnString);
}
