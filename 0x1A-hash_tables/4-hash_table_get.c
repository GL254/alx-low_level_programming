#include "hash_tables.h"

/**
 * hash_table_get - retrieves value from key
 * @ht: hash table
 * @key: contains value
 *
 * Return: value for SUCCESS, NULL otherwise
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index = -1;
	hash_node_t *node = NULL;

	if (ht == NULL || key == NULL)
		return (NULL);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];
	if (node == NULL)
		return (NULL);
	else
		return (ht->array[index]->value);
}
