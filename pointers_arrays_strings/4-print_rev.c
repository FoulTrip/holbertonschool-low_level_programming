/*
 * File: 4-print_rev.c
 * Auth: David Vasquez 
 */

#include "main.h"

/**
 * print_rev - prints a string, in reverse
 * @s: pointer parameter
 *
 * Return: Always 0.
 */
void print_rev(char *s)
{
	int length = 0, index = 0;
	char rev;

	while (s[index++])
		length++;

	for (index = length - 1; index >= lenghth / 2; index--)
	{
		rev = s[index];
		s[index] = s[length - index - 1];
		s[length - index - 1] = rev;
	}
}
