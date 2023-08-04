#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string
 *
 * Return: number converted
 */
unsigned int binary_to_uint(const char *b)
{
	if (b == NULL)
		return (0);

	unsigned int response = 0;
	int index = 0;

	while (b[index])
	{
		if (b[index] != '0' && b[index] != '1')
			return (0);
		response = response << 1;
		if (b[index] == '1')
			response = response | 1;
		index++;
	}

	return (response);
}
