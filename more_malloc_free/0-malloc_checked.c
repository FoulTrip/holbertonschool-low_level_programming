#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - allocates memory using malloc
 * @b: parameter
 *
 * Return: function
 */

void *malloc_checked(unsigned int b)
{
	void *testPointer;

	testPointer = malloc(b);
	if (testPointer == NULL)
		exit(98);
	return (testPointer);
}
