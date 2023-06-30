#include "main.h"

/**
 * _strspn - gets the length of a prefix substring
 * @s: initialString
 * @c: compare String
 *
 * Return: number of byts
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int indexOrigin, indexCopy, counter;

	counter = 0;

	for (index = 0; s[indexOrigin] != '\0'; index++)
	{
		for (indexCopy = 0; accept[indexCopy] != '\0'; indexCopy++)
		{
			if (accept[indexCopy] == s[indexOrigin])
			{
				counter++;
				break;
			}
		}

		if (accept[indexCopy] != s[indexOrigin])
		{
			break;
		}
	}

	return (counter);
}
