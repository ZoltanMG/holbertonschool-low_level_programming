#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * array_range - function
 * @min: int
 * @max: int
 * Return: arr
 */
int *array_range(int min, int max)
{
	int size;
	int *arr;
	int cont;

	size = (max - min) + 1;
	if (min > max)
	{
		return (NULL);
	}
	arr = malloc(sizeof(int) * size);
	if (arr == NULL)
	{
		return (NULL);
	}

	for (cont = min; cont <= max; cont++)
	{
		arr[cont] = cont;
	}
	return (arr);
}
