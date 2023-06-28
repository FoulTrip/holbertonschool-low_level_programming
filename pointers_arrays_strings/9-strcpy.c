#include "main.h"

/**
 * _strcpy - copies the string pointed
 * @dest: first pointer
 * @src: second pointer
 *
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int count = 0;

	while (src[count])
	{
		dest[count] = src[count];
		count++;
	}

	return (dest);
}
