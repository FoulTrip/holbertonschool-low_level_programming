/*
 * File: 9-fizz_buzz.c
 * Auth: David Vasquez 
 */

#include <stdio.h>

/**
 * main - function de fizz buzz
 *
 * Return: Always 0.
 */

int main(void)
{
	int initNum;

	for (initNum = 0; initNum <= 100; initNum++)
	{
		if ((initNum % 3) == 0 && (initNum % 5) == 0)
			printf("fizzBuzz"); 

		else if ((initNum % 3) == 0)
			printf("fizz");

		else if ((initNum % 5) == 0 )
			printf("Buzz");
		else
			printf("%d", initNum);

		if (initNum == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}
