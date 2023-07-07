#include "main.h"

/**
 * get_endianness - checks the order of bytes in a comp memory.
 *
 * Return: 0(big), 1(small)
 */
int get_endianness(void)
{
	unsigned int i;
	char *c;

	i = 1;
	c = (char *) &i;

	return ((int)*c);
}
