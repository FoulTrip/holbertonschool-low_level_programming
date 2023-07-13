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
	char *finalString;

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

	finalString = (char *) malloc(((firstIndex + secondIndex) + 1) * sizeof(char));

	if (finalString == NULL)
		return (NULL);

	for (firstIndex = 0; s1[firstIndex] != '\0'; firstIndex++)
	{
		finalString[firstIndex] = s1[firstIndex];
	}
	for (secondIndex = 0; s2[secondIndex] != '\0'; secondIndex++)
	{
		finalString[firstIndex] = s2[secondIndex];
		firstIndex++;
	}

	return (finalString);
}
