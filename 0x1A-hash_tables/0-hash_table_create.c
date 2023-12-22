#include "hash_tables.h"

/**
 * hash_table_create - creates a hash table
 * @size: the size of the hash table
 *
 * Return: pointer to hash table, NULL otherwise
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	unsigned long int i;
	hash_table_t *ptr = NULL;

	if (size <= 0 || size >= ULONG_MAX)
		return (NULL);
	ptr = (hash_table_t *) malloc(sizeof(hash_table_t));
	if (ptr == NULL)
		return (NULL);
	ptr->size = size;
	ptr->array = (hash_node_t **) calloc(size, sizeof(hash_node_t *));
	if (ptr->array == NULL)
	{
		free(ptr);/*add freeing table*/
		return (NULL);
	}
	for (i = 0; i < ptr->size; i++)
		ptr->array[i] = NULL;
	return (ptr);
}

/**
 * free_node - frees a hash table node
 * @node: hash table node
 *
 * Return: nothing
 */
void free_node(hash_node_t *node)
{
	if (node == NULL)/*node does not exist or was freed*/
		return;
	free(node);
	node = NULL;
}
