#include <stdio.h>

/**
 * int_index - pointer to function
 * @array: pointer to int
 * @size: int
 * @cmp: pointer to function
 * Return: 0 or -1
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int a;
	int b;

	if (size <= 0)
		return (-1);
	if (!array || !cmp)
		return (-1);
	for (a = 0; a < size; a++)
	{
		b = (*cmp)(array[a]);
		if (b == 1)
			return (a);
	}
	return (-1);
}
