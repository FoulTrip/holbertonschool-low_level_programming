#include "main.h"

/**
 * _strncpy - copies a string
 * @dest: chain of destinity
 * @src: font of origin
 * @n: cantities a copy
 *
 * Return: cantities of values
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, sizeof(dest) - 1);
	dest[sizeof(dest) - 1] = '\0';

	printf("%s\n", dest);

	return (0);
}
