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

	if (*str == '\0')
		return (NULL);
	for (c = 0; str[c] != '\0'; c++)
	{
	}
	ptr = malloc(c + 1 * sizeof(char));

	for (i = 0; str[i] != '\0'; i++)
	{
		ptr[i] = str[i];
	}
	ptr[i] = '\0';
	return (ptr);
}
