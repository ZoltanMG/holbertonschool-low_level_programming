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

	if (array == NULL || !size)
		return (-1);
	for (count = 0; count != t_size; count++)
	{
		if (array[count] == value)
		{
			printf("Value checked array[%d] = [%d]\n",
			       count,
			       array[count]);
			return (count);
		}
		printf("Value checked array[%d] = [%d]\n", count, array[count]);
	}
	return (-1);
}
