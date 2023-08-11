#include "hash_tables.h"

/**
 * hash_djb2 - implementing the djb2 algorithm.
 * @str: String used to generate hash value
 *
 * Return: value of hash
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int c;

	while ((c = *str++))
	{
		hash = ((hash << 5) + hash) + c;
	}

	return (hash);
}
