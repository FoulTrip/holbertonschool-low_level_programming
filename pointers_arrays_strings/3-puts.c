/*
 * File: 3-puts.c
 * Auth: David Vasquez
 */

#include "main.h"
#include <stdio.h>

/**
 * _puts - prints a string, followed by a new line
 * @str: Pointer parameter
 *
 * Return: Always 0.
 */
void _puts(char *str)
{
	while(*str)
		_putchar(*str++);

	_putchar('\n');
}
