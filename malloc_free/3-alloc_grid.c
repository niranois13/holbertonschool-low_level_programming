#include "main.h"
#include <stdlib.h>
/**
* alloc_grid - allocates memory dinamically for a 2D array
* @width: number of rows of the array
* @height: number of columns of the array
* Return: pointer to the array if success; NULL otherwise
*/
int **alloc_grid(int width, int height)
{
	int **grid;
	int i;
	int j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(width * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	for (i = 0 ; i < width ; i++)
	{
		grid[i] = malloc(height * sizeof(int));
		if (grid[i] == NULL)
		{
			return (NULL);
		}
		for (j = 0 ; j < height ; j++)
		{
			grid[i][j] = 0;
		}
	}
	return (grid);
}
