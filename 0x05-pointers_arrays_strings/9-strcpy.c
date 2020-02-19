#include "holberton.h"

/**
 * _strcpy - function pointer
 * @dest: destino
 * @src: data
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int a;
	int b = 0;

	for (a = 0; src[a] > '\0'; a++)
	{
		b++;
	}
	for (a = 0; a < b; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}
