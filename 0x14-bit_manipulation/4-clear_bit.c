#include "main.h"

/**
 * clear_bit - it sets the value of a bit to 0 at a given index
 * @index: index to set starting from 0.
 * @n: pointer to the num to set.
 *
 * Return: 1 if it works and -1 if there is an error.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	if ((*n >> index) & 1)
		*n -= 1 << index;
	return (1);

	return (-1);
}
