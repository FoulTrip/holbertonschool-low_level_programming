#include "hash_tables.h"

/**
 * hash_table_delete - prints a hash table
 * @ht: is the hash table
 **/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int subIndex;
	hash_node_t *temp;

	if (ht == NULL)
		return;

	for (subIndex = 0; subIndex < ht->size; subIndex++)
	{
		if (ht->array[subIndex])
		{
			while (ht->array[subIndex])
			{
				temp = ht->array[subIndex];

				free(temp->key);
				free(temp->value);
				free(temp);
				ht->array[subIndex] = ht->array[subIndex]->next;
			}
		}
	}
	free(ht->array);
	free(ht);
}
