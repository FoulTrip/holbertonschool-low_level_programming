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
int _strlen(char *s)
{
	int length = 0;

	while (*s++)
		length++;

	return (length);
}
