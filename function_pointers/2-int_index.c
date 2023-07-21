#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - function that searches for an integer
 *
 * @size: This is the length of the array
 * @array: this is input array
 * @cmp: Is a pointer to the function used for compare values
 *
 * Return: Always 0
 */

int int_index(int *array, int size, int (*cmp)(int));
{
	int index;

	if (array == NULL)
		return (-1);
	if (size <= 0)
		return (-1);
	if (index = 0; a < size; index++)
	{
		if ((cmp(array[index])) == 1)
		{
			return (index);
		}
	}
	return (-1);
}
