#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - nested loop used to make a grid.
 * @height: height of input
 * @width: width of input
 * Return: return pointer to 2 dimensional array.
 */
int **alloc_grid(int width, int height)
{
	int **mee;
	int x, y;

	if (width <= 0 || height <= 0)
	return (NULL);

	mee = malloc(sizeof(int *) * height);
	if (mee == NULL)
		return (NULL);

		for (x = 0; x < height; x++)
		{
			mee[x] = malloc(sizeof(int) * width);
			if (mee[x] == NULL)
			{
				for (; x >= 0; x--)
					return (NULL);
			}
		}
		for (x = 0; x < height; x++)
		{
			for (y = 0; y < width; y++)
				mee[x][y] = 0;
		}
		return (mee);
}
