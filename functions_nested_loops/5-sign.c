#include "main.h"
#include <stdio.h>

/**
 * print_sign - prints the sign of a number.
 *
 * Return: 0 and 1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		putchar(43);
		return (1);
	}

	if (n < 0)
	{
		putchar('0');
		return (-1);
	}

	return (0);
}
