#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip to
 * get from one number to another.
 * @n: first number.
 * @m: target number.
 *
 * Return: num bits flipped.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, bits = 0;
	unsigned long int first;
	unsigned long int target = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		first = target >> i;
		if (first & 1)
			bits++;
	}
	return (bits);
}
