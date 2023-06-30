#include "main.h"

/**
 * _memcpy - copies memory area.
 * @dest: original destination
 * @src: area memory
 *
 * Return: copy Memory
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char copyMemory = *dest;

	while (n > 0)
	{
		*dest = *src;
		dest++;
		src++;
		n--;
	}

	return (*copyMemory);
}
