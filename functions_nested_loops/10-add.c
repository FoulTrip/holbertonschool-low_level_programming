#include "main.h"
#include <stdio.h>

/**
 * add - that adds two integers and returns the result
 *
 * Return: Always 0.
 */
int add(int numOne, int numTwo)
{
	int operation = &numOne + &numTwo;
	printf('El resultado es: %d\n', operation);

	return (0);
}
