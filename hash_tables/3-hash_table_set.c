#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table.
 * @ht: s the hash table you want to add or update the key/value to
 * @key: key
 * @value:  is the value associated with the key. 
 *          value must be duplicated. value can be an empty string
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	hash_table_t *new_hash_table;
	char *value_copy;
	unsigned long int index, subIndex;

	if (ht == NULL || key == NULL || value == NULL)
		return (0);

	value_copy = strdup(value);
	if (value_copy == NULL)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	for (subIndex = index; ht->array[subIndex]; subIndex++)
	{
		if (strcmp(ht->array[subIndex]->key,key) == 0)
		{
			free(ht->array[subIndex]->value);
			ht->array[subIndex]->value = value_copy;
			return (1);
		}
	}

	new_hash_table = malloc(sizeof(hash_node_t));
	if (new == NULL)
	{
		free(value_copy);
		return (0);
	}
	new_hash_table->key = strdup(key);
	if (new->key == NULL)
	{
		free(new);
		return (0);
	}	

	new_hash_table->value = value_copy;
	new_hash_table->next = ht->array[index];
	ht->array[index] = new_hash_table;

	return (1);
}
