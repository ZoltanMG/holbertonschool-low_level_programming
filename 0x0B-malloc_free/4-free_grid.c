#include <stdlib.h>

/**
 * free_grid - function
 * @grid: int
 * @height: int
 */
void free_grid(int **grid, int height)
{
	int cont;

	for (cont = 0; cont < height; cont++)
	{
		free(grid[cont]);
	}
	free(grid);
}
