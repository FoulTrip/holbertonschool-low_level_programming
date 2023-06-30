#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals
 *                  of a square matrix of integers.
 * @a: arrays
 * @size: size array
 *
 * Return: result operation
 */

void print_diagsums(int *a, int size)
{
	int index, oneSum = 0, secondSum = 0;

	for (index = 0; index < size; index++)
	{
		oneSum += a[index];
		a += size;
	}

	a -= size;

	for (index = 0; index < size; index++)
	{
		secondSum += a[index];
		a -= size;
	}

	print("%d, %d\n", oneSum, secondSum);
}
