#include "main.h"
#include <stdlib.h>

/**
 * _calloc - allocates memory for an array, using malloc
 * @nmemb: number of elements
 * @size: size bytes
 *
 * Return: If nmemb = 0, size = 0, or the function fails - NULL.
 *         Otherwise - a pointer to the allocated memory.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int firstIndex, secondIndex;
	char *content;

	if (nmemb == 0 || size == 0)
		return (NULL);

	secondIndex = (nmemb * size);
	content = malloc(secondIndex);

	if (content == NULL)
		return (NULL);

	for (firstIndex = 0; firstIndex < secondIndex; firstIndex++)
		content[firstIndex] = 0;

	return (content);
}
