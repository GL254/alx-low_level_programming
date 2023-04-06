#include "main.h"

/**
 * get_endianness - is a function that checks endianness.
 * Return: 0 for big endian, 1 for little endian.
 */
int get_endianness(void)
{
	unsigned int i = 1;
	char *c = (char *) &i;

	if (*c)
		return (1);
	else
		return (0);
}