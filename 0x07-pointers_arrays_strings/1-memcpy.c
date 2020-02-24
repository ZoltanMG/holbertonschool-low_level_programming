#include "holberton.h"

/**
 * _memcpy - the function
 * @dest: pointer
 * @src: pointer
 * @n: size
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int count;
	int n2 = n;

	for (count = 0; count < n2; count++)
		dest[count] = src[count];
	return (dest);
}
