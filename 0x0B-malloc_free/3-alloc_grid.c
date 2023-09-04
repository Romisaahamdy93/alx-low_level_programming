#include "main.h"
#include <stdlib.h>
/**
 * **alloc_grid -  returns a pointer to a 2 dimensional array of integers
 * @width: is an integer
 * @height: is an integer
 * Return: NULL on failure
 */
int **alloc_grid(int width, int height)
{
int **grid;
int x, y;
if (width <= 0 || height <= 0)
return (NULL);
grid = malloc(height * sizeof(*grid));
if (grid == NULL)
return (NULL);
for (x = 0; x < height; x++)
{
grid[x] = malloc(width * sizeof(**grid));
if (grid[x] == NULL)
{
while (x >= 0)
{
free(grid[x]);
x--;
}
free(grid);
return (NULL);
}
for (y = 0; y < width; y++)
{
grid[x][y] = 0;
}
}
return (grid);
}
