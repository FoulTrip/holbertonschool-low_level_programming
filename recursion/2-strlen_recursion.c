#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * _strlen_recursion - length of a string.
 * @s: parameter string
 *
 * Return: lenght
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);

	return (_strlen_recursion(s + 1) + 1);
}
