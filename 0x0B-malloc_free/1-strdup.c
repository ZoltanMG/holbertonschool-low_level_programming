#include <stdio.h>
#include <stdlib.h>

/**
 * _strdup - function to malloc and free
 * @str: int
 * Return: allways char
 */
char *_strdup(char *str)
{
	char *ptr;
	int c, i;

	if (str == NULL)
		return (NULL);
	for (c = 0; str[c] != '\0'; c++)
	{
	}

	ptr = malloc(c + 1 * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < c; i++)
	{
		ptr[i] = str[i];
	}
	return (ptr);
}
