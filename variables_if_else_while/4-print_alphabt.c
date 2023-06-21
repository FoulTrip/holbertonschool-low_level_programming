/*
 * File: 4-print_alphabt.c
 * Auth: David Vasquez
 */

#include <stdio.h>

/**
 * main - print the alphabet in lowcase, except q and e
 *
 * Return: Always 0.
 */
int main(void)
{
	char letter;

	for(letter = 'a'; letter <= 'z'; letter +)
	{
		if(letter != 'e' && letter != 'q')
		       putchar(letter);	
	}

	putchar('\n');

	return (0);
}
