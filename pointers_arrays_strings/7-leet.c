#include "main.h"

/**
 * leet -  encodes a string into 1337
 * @letter: parmeter pointer
 *
 * Return: Always 0.
 */

char *leet(char *letter)
{
	char *pointer = letter;
	char *leetChars = "AaEeOoTtLl";
	char *leetReplacements = "4433007711";

	while (*pointer != '\0')
	{
		int index = 0;
		int isReplced = 0;

		while (leetChars[index] != '\0')
		{
			if (*pointer == leetChars[index])
			{
				*pointer = leetReplacements[index];
				isReplaced = 1;
				break;
			}
			index++
		}
		if (!isReplaced)
		{
			*pointer = *pointer;
		}

		pointer++
	}

	return (letter);
}
