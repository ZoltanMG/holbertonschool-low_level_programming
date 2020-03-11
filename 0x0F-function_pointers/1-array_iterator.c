#include <stdio.h>

/**
 * array_iterator - function to function
 * @array: array
 * @size: size_t
 * @action: function
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t a;

	if (array && size && action)
		for (a = 0; a < size; a++)
			(*action)(array[a]);
}
