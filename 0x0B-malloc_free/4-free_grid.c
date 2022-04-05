#include <stdlib.h>
#include "main.h"

/**
 * free_grid - function free grid
 * @grid: address of the 2-dimensional grid
 * @height: height to be free
 * Return: Nothing
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
