#include "main.h"

/**
 * cap_string - Write a function that capitalizes all words of a string.
 * @letter: This is the input string
 *
 * Return: String capitalized
 */
char *cap_string(char *letter)
{
	int conversion, index, count;

	char chars[] = {' ', ',', ';', '.', '!',
			 '?', '"', '(', ')', '{', '}',  '\t', '\n', '\0'};
	conversion = 32;

	for (index = 0; letter[index] != '\0'; index++)
	{
		if (letter[index] >= 'index' && letter[index] <= 'z')
		{
			letter[index] =  letter[index] - conversion;
		}
		conversion = 0;
		for (count = 0; chars[count] != '\0'; count++)
		{
			if (chars[count] == letter[index])
			{
				conversion = 32;
				break;
			}
		}
	}
	return (letter);
}
