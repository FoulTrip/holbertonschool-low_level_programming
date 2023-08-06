#include "main.h"

/**
 * flip_bits -  returns the number of bits you would need
 *              to flip to get from one number to another.
 * @n: number
 * @m: flip n
 *
 * Return: number of bits you would need
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int WBxor = n ^ m, bits = 0;

	while (WBxor > 0)
	{
		bits += (WBxor & 1);
		WBxor >>= 1;
	}

	return (bits);
}
