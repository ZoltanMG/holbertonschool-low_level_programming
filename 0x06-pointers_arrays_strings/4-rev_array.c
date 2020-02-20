#include "holberton.h"

/**
 * reverse_array - function
 * @a: array
 * @n: int
 */
void reverse_array(int *a, int n)
{
	int d[500];
	int b;
	int c = 0;

	for (b = (n - 1); b >= 0; b--)
	{
		d[c] = a[b];
		c++;
	}
	for (b = 0; b < c; b++)
	{
		a[b] = d[b];
	}
}
