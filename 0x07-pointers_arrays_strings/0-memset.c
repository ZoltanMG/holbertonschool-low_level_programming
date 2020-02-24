#include "holberton.h"

/**
 * _memset - the function
 * @s: pointer int
 * @b: constant
 * @n: size
 * Return: s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int count;

	for (count = 0; count < n; count++)
		s[count] = b;
	return (s);
}
