#include "hash_tables.h"

/**
 * key_index - returns the index of a hashed value
 * @key: the key in our hash table
 * @size: size of our hash table
 *
 * Return: index of our hashed value
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int index = -1, hashed_value = 0;
	size_t length = 0;

	if (key == NULL || strlen((const char *)key) == 0)
		exit(EXIT_FAILURE);
	length = strlen((const char *)key);
	if (size <= 0 || size >= ULONG_MAX || length >= CHAR_MAX)
		exit(EXIT_FAILURE);
	hashed_value = hash_djb2(key);
	index = hashed_value % size;
	return (index);
}
