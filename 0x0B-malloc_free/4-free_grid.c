#include "main.h"
#include <stdlib.h>

/**
  * free_grid - frees a 2d array
  * @grid: grid name
  * @height: grid height
  *
  * Return: ...
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
