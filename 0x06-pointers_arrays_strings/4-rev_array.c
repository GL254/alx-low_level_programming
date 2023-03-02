#include "main.h"

/**
 * reverse_array - reverses array of integers
 * @a: array
 * @n: number of elements of an array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i;
	int t;

	for (i = 0; i < n--; i++)
	{
		a[n] = t;
		t = a[i];
		a[i] = a[n];
	}
}
