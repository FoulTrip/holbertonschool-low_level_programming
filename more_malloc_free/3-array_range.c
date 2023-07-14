#include "main.h"
#include <stdlib.h>

/**
 * array_range - creates an array of integers
 * @min: range min
 * @max: range max
 *
 * Return: new array
 */

int *array_range(int min, int max)
{
	int index, copyRange;
	inr *range;

	if (min > max)
		return (NULL);

	copyRange = min;
	range = (int *) malloc(sizeof(int) * (max - min + 1));

	if (range == NULL)
		return (NULL);

	for (a = 0; a <= (max - min); firstIndex++)
	{
		range[a] = b;
		b++;
	}

	return (range);
}
