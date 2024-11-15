#include "main.h"

/**
 * free_grid - free bidimensional grid last task
 * @**grid: pointer parameter
 * @height: size last
 * Return: void (nothing)
*/

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);

	free(grid);
}
