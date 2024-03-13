#include "main.h"
#include <stdlib.h>
/**
* free_grid - frees allocated memory of a 2D array
* @grid: the array
* @height: rows of the array
* Return: void
*/
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0 ; i < height ; i++)
		free(grid[i]);
	free(grid);
}
