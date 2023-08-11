#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: is the hash table
 *
 * Return: hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int subIndex;
	int first_element = 0;
	hash_node_t *pointer;

	if (ht == NULL)
		return;

	printf("{");
	for (subIndex = 0; subIndex < ht->size; subIndex++)
	{
		if (ht->array[subIndex])
		{
			pointer = ht->array[subIndex];
			while (pointer)
			{
				if (first_element == 0)
				{
					printf("'%s': '%s'", pointer->key, pointer->value);
					first_element += 1;
				}
				else
					printf(", '%s': '%s'", pointer->key, pointer->value);

				pointer = pointer->next;
			}
		}
	}
	printf("}\n");
}
