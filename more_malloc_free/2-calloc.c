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
	void *memory;
        char *content;
        unsigned int index;

	if (memory == NULL)
		return (NULL);

	content = memory;

	for (index = 0; index < (size * nmemb); index++)
		content[index] = '\0';

	return (memory);	
}
