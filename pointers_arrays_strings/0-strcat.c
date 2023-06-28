/*
 * File: 0-strcat.c
 * Auth: David Vasquez
 */

#include "main.h"

char *_strcat(char *dest, char *src)
{
	char *stringFinal = dest;

	while (*dest != '\0')
	{
		dest++;
	}

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';

	return stringFinal;
}
