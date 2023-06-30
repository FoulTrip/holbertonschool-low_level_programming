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
	unsigned int count;
	char *copyDest = dest;
	char const *copySRC = src;

	for (count = 0; count < n; count++)
	{
		*copyDest++ = *opySRC++;
	}
	return (dest);
}
