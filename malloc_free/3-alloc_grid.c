#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2 dimensional array of integers.
 * @width: The width of the array.
 * @height: The height of the array.
 *
 * Return: If width or height is 0, negative, or the function fails - NULL.
 *         Otherwise - a pointer to the 2D array.
 */
int **alloc_grid(int width, int height)
{
int **grid, index, sub_index;

if (width <= 0 || height <= 0)
return (NULL);

grid = malloc(sizeof(int *) * height);

if (grid == NULL)
return (NULL);

for (index = 0; index < height; index++)
{
grid[index] = malloc(sizeof(int) * width);
if (grid[index] == NULL)
{
for (; index >= 0; index--)
free(grid[index]);
free(grid);
return (NULL);
}
}

for (index = 0; index < height; index++)
{
for (sub_index = 0; sub_index < width; sub_index++)
grid[index][sub_index] = 0;
}

return (grid);
}

