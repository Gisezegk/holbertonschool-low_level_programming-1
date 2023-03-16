#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void
free_grid(int **grid, int height)
{
	int t;

	if (grid == NULL)
	{
		free(grid);
	}

	for (t = 0; t < height; t++)
	{
		free(grid[t]);
	}
	free(grid);
}
