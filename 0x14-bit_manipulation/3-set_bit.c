#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: unsigned long interger
 * @index: unsigned interger
 *
 * Return: 1(success), -1(failure)
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int x;

	if (index > 32)
		return (-1);
	x = 1 << index;
	*n = (*n | x);

	return (1);
}
