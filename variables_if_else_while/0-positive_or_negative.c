#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/*
 * File: 0-positive_or_negative.c
 * Auth: David Vasquez
 */

/* betty style doc for function main goes there */

/**
 * main - will assign a random number to th
 *        e variable n each time it is executed.
 *
 *        Return: Always 0.
 */
int main(void)
{  
	int n;
	srand(time(0));
        n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	{
		printf("is positive");
	} if else (n < 0) 
	{
		printf("is negative");
	} else if (n == 0) {
		printf("is zero");
	}
	
	return (0)
}
