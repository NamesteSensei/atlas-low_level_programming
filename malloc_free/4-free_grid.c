#include "main.h"
#include <stdlib.h>

/**
 * free_grid - Frees a 2 dimensional grid previously created by alloc_grid.
 * @grid: The grid to be freed.
 * @height: The height of the grid.
 *
 * Return: Nothing.
 */
void free_grid(int **grid, int height)
{
int index;

for (index = 0; index < height; index++)
free(grid[index]);

free(grid);
}

