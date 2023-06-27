/*
 * File: 2-strlen.c
 * Auth: David Vasquez
 */

#include "main.h"

/**
 * _strlen - returns the length of a string
 * @s: pointer parameter.
 *
 * Return: Always 0.
 */
size_t _strlen(char *s)
{
	size_t length = 0;

	while (*s++)
		length++;

	return (length);
}
