#include "main.h"
#include "stdlib.h"
/**
 * alloc_grid - returns a pointer to a 2 dimensional array of integers
 * @width: width of the grid
 * @height: height of the grid
 *
 * Return: an integer pointer of 2 dimensions
 */
int **alloc_grid(int width, int height)
{
	int x, z;
	int **pointer;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	pointer = malloc(sizeof(int *) * height);
	if (pointer == NULL)
	{
		free(pointer);
		return (NULL);
	}
	for (x = 0; x < height; x++)
	{
		pointer[x] = malloc(sizeof(int) * width);
		if (pointer[x] == NULL)
		{
			for (x--; x >= 0; x--)
			{
				free(pointer[x]);
			}
			free(pointer);
			return (NULL);
		}
	}
	for (x = 0; x < height; x++)
	{
		for (z = 0; z < width; z++)
		{
			pointer[x][z] =  0;
		}
	}
	return (pointer);
}

