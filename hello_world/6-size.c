/*
 * File: 6-size.c
 * Auth: David Vasquez
 */

#include <stdio.h>

/**
 * main - Prints the size of various types based on
 *        the computer it is compiled and run on..
 *
 * Return: Always 0.
 */
int main(void) 
{
	printf("Size of char: %zu byte(s)\n", sizeof(char));
	printf("Size of int: %zu byte(s)\n", sizeof(int));
	printf("Size of long: %zu byte(s)\n", sizeof(long int));
	printf("Size of long long: %zu byte(s)", sizeof(long long int));
	printf("Size of float: %zu byte(s)", sizeof(float));
	
	return (0);
}
