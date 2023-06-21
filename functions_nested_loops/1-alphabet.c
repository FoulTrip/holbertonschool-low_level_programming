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
	char letter;

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	_putchar('\n');
}
