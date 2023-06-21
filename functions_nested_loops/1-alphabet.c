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

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);

	_putchar('\n');
}
