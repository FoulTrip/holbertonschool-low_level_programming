/*
 * File: 1-alphabet.c
 * Auth: david Vasquez 
 */

#include "main.h"

/**
 * print_alphabet - print alphabet
 */
void print_alphabet(void)
{	
	char c;

	while (c <= 'z')
	{
		_putchar(c);
		c++;
	}

	putchar('\n');
}
