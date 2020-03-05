#include <stdio.h>
#include <stdlib.h>

/**
 * alloc_grid - function
 * @width: int
 * @height: int
 * Return: arr
 */
int **alloc_grid(int width, int height)
{
	int cont;
	int cont2;
	int **arr = NULL;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int *) * height);
	if (arr == NULL)
	{
		return (NULL);
	}
	for (cont = 0; cont < height; cont++)
	{
		arr[cont] = malloc(sizeof(int) * width);
		if (arr[cont] == NULL)
		{
			for (cont2 = 0; cont2 < cont; cont2++)
			{
				free(arr[cont2]);
			}
			free(arr);
		}
	}
	for (cont = 0; cont < height; cont++)
	{
		for (cont2 = 0; cont2 < width; cont2++)
		{
			arr[cont][cont2] = 0;
		}
	}
	return (arr);
}
