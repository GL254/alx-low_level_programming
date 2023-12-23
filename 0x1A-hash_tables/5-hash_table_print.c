#include "hash_tables.h"

/**
 * hash_table_print - prints a hash table
 * @ht: hash table
 *
 * Return: nothing
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size_table = 0, i, items, j = 0, coma = 0;
	hash_node_t *node = NULL;

	if (ht == NULL)
	{
		printf("{}");
		return;
	}
	else
	{
		size_table = ht->size;
		i = 0;
		for (items = 0; j < size_table; j++)
		{
			if (ht->array[j] != NULL)
				items++;
		}
		printf("{");
		while (i < size_table)
		{
			if (ht->array[i] == NULL)
			{
				i++;
				continue;
			}
			node = ht->array[i];
			printf("\'%s\': \'%s\'", node->key, node->value);
			if (coma < items - 1)
				printf(", ");
			i++;
			coma++;
		}
		printf("}\n");
	}
}
