/*
 * File: 7-print_diagonal.c
 * Auth: David Vasquez
 */

#include "main.h"

/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: paremeter
 *
 * Return: Always 0.
 */
void print_diagonal(int n)
{
	int diagonal;

	if (n > 0)
	{
		for (diagonal = 0; diagonal < n; diagonal++)
		       _putchar('/');	
	}

	_putchar('\n');
}
