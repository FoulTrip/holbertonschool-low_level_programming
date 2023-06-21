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

	for (c = 'a'; c <= 'z'; c++)
	{
		_putchar(c);
	}

	putchar('\n');
}
