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
	int cont2 = min;

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

	for (cont = 0; cont < size; cont++, cont2++)
	{
		arr[cont] = cont2;
	}
	return (arr);
}
