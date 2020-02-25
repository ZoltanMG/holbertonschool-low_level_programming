#include "holberton.h"
#include <stdio.h>

/**
 * print_diagsums - function
 * @a: char
 * @size: char
 */
void print_diagsums(int *a, int size)
{
	int sum = 0, sum2 = 0, i, j = size - 1;

	for (i = 0; i < (size * size); i += size + 1, j += size - 1)
	{
		sum += a[i];
		sum2 += a[j];
	}
	printf("%d, %d\n", sum, sum2);
}
