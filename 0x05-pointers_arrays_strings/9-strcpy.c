#include "holberton.h"
/**
 * _strcpy - print reverse
 * @dest: var pointer
 * @src: var pointer two
 * Return: no
 */
char *_strcpy(char *dest, char *src)
{
	int x;

	for (x = 0; src[x] != '\0'; x++)
	{
		dest[x] = src[x];
	}
	dest[x] = '\0';

	return (dest);
}
