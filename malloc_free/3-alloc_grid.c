#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers.
 * @width: array width
 * @height: array height
 *
 * Return: pointer
 */
int **alloc_grid(int width, int height)
{
	int firstIndex, secondIndex;
	int **arr;

	if (width < 1 || height < 1)
		return (NULL);

	arr = (int **) malloc(sizeof(int *) * height);

	if (arr == NULL)
	{
		free(arr);
		return (NULL);
	}

	for (secondIndex = 0; secondIndex < height; secondIndex++)
	{
		arr[secondIndex] = malloc(sizeof(int) * width);
		if (arr[secondIndex] == NULL)
		{
			for (secondIndex = 0; secondIndex < height; secondIndex++)
			{
				free(arr[secondIndex]);
			}
			free(arr);
			return (NULL);
		}
	}

	for (secondIndex = 0; secondIndex < height; secondIndex++)
		for (firstIndex = 0; firstIndex < width; firstIndex++)
		{
			arr[secondIndex][firstIndex] = 0;
		}

	return (arr);
}
