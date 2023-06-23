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
		if (initNum % 3 == 0)
		{
			printf("fizz"); 
		}


		if (initNum % 5 == 0)
		{
			printf("buzz");
		}

		if (initNum % 3 == 0 && initNum % 5 == 0)
		{
			printf("FizzBuzz");
		}
	}

	return (0);
}
