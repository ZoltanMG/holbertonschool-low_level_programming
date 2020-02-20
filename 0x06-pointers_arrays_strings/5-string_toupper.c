#include "holberton.h"

/**
 * string_toupper - function
 * @i: char
 * Return: i
 */
char *string_toupper(char *i)
{
	int count;
	int aux;

	for (count = 0; i[count] != '\0'; count++)
	{
		if (i[count] > 96 && i[count] < 123)
		{
			aux = i[count];
			aux = aux - 32;
			i[count] = aux;
		}
	}
	return (i);
}
