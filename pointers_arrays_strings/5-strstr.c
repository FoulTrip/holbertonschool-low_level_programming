#include "main.h"

/**
 * _strstr - locates a substring.
 * @haystack: init String
 * @needle: chain string compare
 *
 * Return: substring
 */
char *_strstr(char *haystack, char *needle)
{
	while (*haystack)
	{
		char *temp;

		temp = haystack;
		while (*needle == *haystack)
			haystack++, needle++;

		if (*needle == '\0')
			return (temp);

		haystack++;
	}
	return (0);
}
