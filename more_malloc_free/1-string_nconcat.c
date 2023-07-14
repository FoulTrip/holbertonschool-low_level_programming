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
	unsigned int firstIndex, secondIndex;
	char *newString;

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

	if (n < secondIndex)
		n = secondIndex;

	newString = malloc(((firstIndex + n) + 1));

	if (newString == NULL)
		return (NULL);

	for (firstIndex = 0; s1[firstIndex] != '\0'; firstIndex++)
	{
		newString[firstIndex] = s1[firstIndex];
	}

	for (secondIndex = 0; secondIndex != n; secondIndex++)
	{
		newString[firstIndex] = s2[secondIndex];
		firstIndex++;
	}

	newString[firstIndex] = '\0';
	return (newString);
}
