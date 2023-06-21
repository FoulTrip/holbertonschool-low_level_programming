/*
 * File: 8-print_base16.c
 * Auth: David Vasquez 
 */

#include <stdio.h>

int main(void)
{
	int number;
	char letter;

	for (number = 0; number < 10; number++)
		putchar((number % 10) + '0');

	for (letter = 'a'; letter < 'f'; letter++)
		putchar(letter);

	putchar('\n');
}
