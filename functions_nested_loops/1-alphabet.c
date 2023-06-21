/*
 * File: 1-alphabet.c
 * Auth: david Vasquez 
 */

#include "main.h"

/**
 * print_alphabet - print alphabet
 */
void print_alphabet(_putchar)
{
	char letter;

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	putchar('\n');
}
