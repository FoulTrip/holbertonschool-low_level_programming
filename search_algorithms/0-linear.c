#include "search_algos.h"

/**
 * linear_search - Busca un valor en un array de enteros
 *                 utilizando la búsqueda lineal.
 *
 * @array: Puntero al primer elemento del array.
 * @size: Tamaño del array.
 * @value: Valor que se busca.
 *
 * Return: El índice donde se encontró el valor o -1 si no se encontró.
*/
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%u] = [%d]\n", (unsigned int)i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}

	return (-1);
}
