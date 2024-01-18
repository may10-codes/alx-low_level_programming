#include "main.h"
#include <stdlib.h>
/**
 * free_grid - Frees memory occupied by grid
 * @grid: grid to be freed
 * @height: grid height
 * Returns nothing
 */
void free_grid(int **grid, int height)
{
	int n;

	if (grid == 0 || height == 0)
	{
		return;
	}
	for (n = 0; n < height; n++)
	{
		free(grid[n]);
	}
	free(grid);
}
