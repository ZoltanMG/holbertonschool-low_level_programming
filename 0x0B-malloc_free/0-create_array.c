#include <stdio.h>

/**
 * create_array - function to malloc and free
 * @size: int
 * @c: char
 * Return: allways char
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	int count;

	ptr = malloc(size * sizeof(char));
	for (count = 0; count < size; count++)
	{
		ptr[count] = c;
	}
	ptr[count] = '\0';
	return (ptr);
}
