#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - allocates a 2D array of integers
 * @width: width of the array
 * @height: height of thr array
 *
 * Return: pointer to the array or NULL on failure
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = (int **)malloc(sizeof(int *) * height);

	if (grid == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		grid[a] = (int *)malloc(sizeof(int) * width);

	if (grid[i] == NULL)
	{
		for (b = 0; b < a; b++)
			free(grid[b]);
		free(grid);
		return (NULL);
	}

	for (b = 0; b < width; b++)
		grid[a][b] = 0;
	}

	return (grid);

}
