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
	int diagonal, space

	if (n > 0)
	{
		for (diagonal = 0; diagonal < n; diagonal++)
	        {
			for (space = 0; space < diagonal; space++)
		        {
				_putchar(' ');
		        }
			_putchar('\\');

			if (diagonal == n - 1)
		        {
				continue;
		        }
		}

		_putchar('\n');
	}
	
}
