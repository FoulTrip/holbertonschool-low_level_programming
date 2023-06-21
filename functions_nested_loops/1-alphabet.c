/*
 * File: 1-alphabet.c
 * Auth: david Vasquez 
 */

#include <stdio.h>

/**
 * print_alphabet - print alphabet
 *
 */
char print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter < 'z'; letter++)
		putchar(letter);

	putchar('\n')
}
