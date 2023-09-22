#include "search_algos.h"

/**
 * binary_search - Realiza una búsqueda binaria en un array ordenado.
 * @array: Puntero al primer elemento del array.
 * @size: Tamaño del array.
 * @value: Valor que se busca.
 * 
 * Return: Índice donde se encuentra el valor o -1 si no se encuentra.
*/
int binary_search(int *array, size_t size, int value)
{
	int left = 0;
	int right = size - 1;
	int mid;
	int i;
	
	if (array == NULL || size == 0)
		return (-1);

	while (left <= right)
	{
		mid = left + (right - left) / 2;

		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i != right)
				printf(", ");
		}
		printf("\n");

		if (array[mid] == value)
			return mid;
		else if (array[mid] < value)
			left = mid + 1;
		else
			right = mid - 1;
	}

	return (-1);
}
