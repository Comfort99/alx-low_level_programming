#include "main.h"
#include <stdlib.h>
/**
 * free_grid - function that frees a 2 dimensional grid previously created
 * @grid: a pointer parameter
 * @height: int parameter
 * Return: return 0
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
