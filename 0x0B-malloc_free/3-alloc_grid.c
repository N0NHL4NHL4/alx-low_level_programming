#include <stdlib.h>
#include "main.h"
/**
  * **alloc_grid - returns pointer to 2D array of integers
  *
  * @width: columns in array
  * @height: rows in array
  *
  * Return: pointer to gri or NULL
  */
int **alloc_grid(int width, int height)
{
	int **grid, i, k;

	if (width < 1 || height < 1)
	{
		return (NULL);
	}
	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			while (--i >= 0)
			{
				free(grid[i]);
			}
			free(grid);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (k = 0; k < width; k++)
		{
			grid[i][k] = 0;
		}
	}
	return (grid);
}
