#include "hash_tables.h"

/**
 * hash_table_set - assigns new key-value to hash table
 * @ht: hash table
 * @key: used to access value
 * @value: actual value accessed by key
 *
 * Return: 1 for SUCCESS, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index = -1;
	hash_node_t *node = NULL, *ptr = NULL;
	char *my_value = NULL;

	if (key == NULL || value == NULL)
		return (0);
	if (ht == NULL || strlen(key) == 0 || strlen(key) >= CHAR_MAX)
		return (0);
	if (strlen(value) >= CHAR_MAX)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	if (index == ht->size)/*Not accessible index*/
		return (0);
	my_value = strdup((char *)value);
	node = create_node(key, my_value);
	if (ht->array[index] == NULL)
		ht->array[index] = node;
	else
	{
		ptr = ht->array[index];
		node->next = ptr;
		ht->array[index] = node;
	}
	free(my_value);
	return (1);
}

/**
 * create_node - creates a node
 * @key: to be added
 * @value: to be added
 *
 * Return: new node
 */
hash_node_t *create_node(const char *key, char *value)
{
	hash_node_t *node = NULL;

	node = (hash_node_t *) malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (NULL);
	node->key = strdup((char *)key);
	node->value = strdup(value);
	node->next = NULL;
	return (node);
}
