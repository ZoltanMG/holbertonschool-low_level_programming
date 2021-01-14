#include "search_algos.h"

/**
 * linear_search - function that searches for a value in an array of integers
 * @array:  a pointer to the first element of the array to search
 * @size: is the number of elements in array
 * @value:  is the value to search for
 *
 * Return: always 0 or -1
 */
int linear_search(int *array, size_t size, int value)
{
	int t_size = size;
	int count;

	for (count = 0; count <= t_size; count++)
	{
		if (array[count] == value)
		{
			printf("Value checked array[%i] = [%i]\n",
			       count,
			       array[count]);
			break;
		}
		printf("Value checked array[%i] = [%i]\n", count, array[count]);
	}
	if (count > t_size)
		return (-1);

	return (count);
}
