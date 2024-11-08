#include "main.h"

/**
 * **alloc_grid - ptr to a dimensional array of integers
 * @width: largeur integer
 * @height: hauteur integer
 * Return: new pointer
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(height * sizeof(int *));

	if (grid == NULL)
		return (NULL);

	for (i = 0 ; i < height ; i++)
	{
		grid[i] = malloc(width * sizeof(int));

		if (grid[i] == NULL)
		{
			while (i--)
			{
				free(grid[i]);
				free(grid);
				return (NULL);
			}
		}

		for (j = 0 ; j < width ; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
