#include "main.h"

/**
 * cap_string - capitalizes all words of a string
 * @letter: parameter pointer
 *
 * Return: Always 0.
 */
char *cap_string(char *letter)
{
	int nextConvert = 1;
	char *pointer = letter;

	while (*pointer != '\0')
	{
		if (isspace(*pointer) || ispunc(*pointer))
		{
			nextConvert = 1;
		}
		else
		{
			if (nextConvert)
			{
				*pointer = toupper(*pointer);
				nextConvert = 0;
			}
		}
		pointer++;
	}

	return letter;
}
