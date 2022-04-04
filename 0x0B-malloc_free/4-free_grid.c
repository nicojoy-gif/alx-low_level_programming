#include <stdlib.h>

/**
 * free_grid - entry point
 * Description - free memory allocated to a previously created 2D array
 * @grid: The 2D to free memory from
 * @height: height of the 2D array
 *
 * Return: Nothing
 */
void free_grid(int **grid, int height)
{
	int i;

	i = 0;
	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
