#include "hash_tables.h"

hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_hash_table = NULL;

	if (size > 0)
	{
		new_hash_table = malloc(sizeof(hash_table_t));

		if (new_hash_table == NULL)
		{
			return (NULL);
		}

		new_hash_table->array = calloc(size, sizeof(hash_node_t *));

		if (new_table_hash->array == NULL)
		{
			free(new_hash_table);
			return (NULL);
		}

		new_hash_table->size = size;
		return (new_hash_table);
	}
	return (NULL);
}
