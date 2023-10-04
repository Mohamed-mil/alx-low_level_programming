#include "main.h"

/**
 * free_grid - free the grid
 * @grid: rid of memories
 * @height: int
 * Return: void
*/

void free_grid(int **grid, int height)
{
	int i = 0;

	for (; < height; i++)
		free(grid[i]);
	free(grid);
}
