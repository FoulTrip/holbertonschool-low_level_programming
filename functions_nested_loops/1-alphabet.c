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
	int _putchar(char letter)
	{
		return (write(1, &c, 1));
	}
	
	char letter;

	while (letter <= 'z')
	{
		_putchar(letter);
		letter++;
	}

	putchar('\n');
}
