#include "holberton.h"

/**
 * swap_int - traslate a to b.
 * @a: int pointer 1.
 * @b: int pointer 2.
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
