/*
 * File: 5-rev_string.c
 * Auth: David Vasquez
 */

#include "main.h"

/**
 * rev_string - reverses a string
 * @s: parameter pointer
 *
 * Return: Always 0.
 */
void rev_string(char *s)
{
	int a, lenght;
	char *init, *end = s;

	for (a = 0; s[a] != '\0' && s[a + 1] != '\0'; a++)
	{
		end++;
	}
	lenght = a + 1;
	init = s;
	for (a = 0; a < lenght / 2; a++)
	{
		char x;
		x = *end;
		*end = *init;
		*init = x;
		init++;
		end--;
	}
	end[lenght + 1] = '\0';
}
