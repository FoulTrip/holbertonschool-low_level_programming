#include "main.h"

/**
 * _islower - Checks for lowercase character
 *
 * lowercase in ASCII: 97 - 122
 *
 * Return: Always 0.
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}

	return (0);
}
