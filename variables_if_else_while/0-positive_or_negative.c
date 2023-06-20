/*
 * File: 0-positive_or_negative.c
 * Auth: David Vasquez
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
 * main - will assign a random number to the
 *        variable n each time it is executed.
 *
 *        Return: Always 0.
 */
int main(void)
{
	int n;
	srand(time(0));
        n = rand() - RAND_MAX / 2;

	if (n > 0)
		printf("%d is positive\n", n);
	else if (n < 0) 
		printf("%d is negative", n);
	else
		printf("%d is zero", n);
	
	return (0);
}
