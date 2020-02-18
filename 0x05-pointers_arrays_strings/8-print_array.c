#include "holberton.h"
#include <stdio.h>

/**
 * print_array - print order array
 * @a: pointer
 * @n: number of array
 */
void print_array(int *a, int n)
{
	int b;

	for (b = 0; b < n; b++)
	{
		printf("%i", a[b]);
		if (b != n - 1)
			printf(", ");
	}
	printf("\n");
}
