#include "main.h"

/**
 * set_bit - this function sets the value of a bit to 1 at a given index.
 * @index: index of the bit you want to set
 * @n: num to set
 *
 * Return: 1 if it works, -1 if error occurs.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	if (!((*n >> index) & 1))
	{
		*n += 1 << index;
	return (1);
	}
		return (-1);
}
