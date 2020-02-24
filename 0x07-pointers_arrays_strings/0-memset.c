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
	int count;
	int n2 = n;

	for (count = 0; count < n2; count++)
		s[count] = b;
	return (s);
}
