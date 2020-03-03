#include <stdlib.h>

/**
 * create_array - function to malloc and free
 * @size: int
 * @c: char
 * Return: allways char
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int count;

	if (size == 0)
		return (0);
	ptr = malloc(size * sizeof(char));
	if (ptr == '\0')
		return (0);
	for (count = 0; count < size; count++)
	{
		ptr[count] = c;
	}
	ptr[count] = '\0';
	return (ptr);
}
