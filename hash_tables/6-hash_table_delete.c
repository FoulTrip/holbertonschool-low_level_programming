#include "hash_tables.h"

/**
 * hash_table_delete - deletes a hash table.
 * @ht: is the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int subIndex;
	hash_table_t *temp;

	if (ht == NULL)
		return;

	for (subIndex = 0; subIndex < ht->size; subIndex++)
	{
		if (ht->array[subIndex])
		{
			while (ht->array[subIndex])
			{
				temp = ht->array[subIndex];

				free(tmp->key);
				free(tmp->value);
				free(tmp);
				ht->array[subIndex] = ht->array[subIndex]->next;
			}
		}
	}

	free(ht->array);
	free(ht);
}
