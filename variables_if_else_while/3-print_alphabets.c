/*
 * File: 3-print_alphabets.c
 * Auth: David Vasquez 
 */

#include <stdio.h>

/**
 * main - prints the alphabets in lowcase
 *        and then in uppercase
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		putchar(letter);
	
	for (letter = 'A'; letter <= 'Z'; letter++)
		putchar(letter);

	putchar("\n");
}
