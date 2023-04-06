#include "main.h"

/**
 * get_bit - returns the value of a bit at a given index
 * @index: index of the bit you want to get
 * @n: num to search
 *
 * Return: value of the bit at index or -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit;

	if (index > 63)
		return (-1);
	bit = ((n >> index) & 1);
	return (bit);
}
