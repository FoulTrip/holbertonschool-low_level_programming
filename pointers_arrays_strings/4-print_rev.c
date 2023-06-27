/*
 * File: 4-print_rev.c
 * Auth: David Vasquez
 */

#include "main.h"

/**
 * print_rev - Reverses a string.
 * @s: parameter pointer.
 */
void print_rev(char *s)
{
	int len = 0, index;

	while (s[index++])
		len++;

	for (index = len - 1; index >= 0; index--)
		_putchar(s[index]);

	_putchar('\n');
}
