/*
 * File: 1-last_digit.c
 * Auth: David Vasquez
 */

#include <stdlib.h>
#include <time.h>
#include <stdio.h>

 /**
  * main - assign a random number to the variable
  *        n each time it is executed
  *
  * Return: Always 0.
  */
int main(void)
{
	int n;
	
	srand(time(0));
	n = rand() - RAND_MAX / 2;
        int lastNumber = n % 10;

        if (lastNumber > 5)
		printf("%d Last digit of ", &n, " is " &lastNumber " and is greater than 5");
        else if (lastNumber < 6 && lastNumber != 0)
                printf("%d Last digit of ", &n, " is " &lastNumber " and is less than 6 and not 0");
        else if (lastNumber == 0)
                printf("%d Last digit of ", &n, " is " &lastNumber " and is 0");

	return (0);
}
