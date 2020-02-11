#include "holberton.h"

/**
 * _islower - check lowercaser
 * @c: the int to return
 * Return: 1 if c is lowercase
 */
int _islower(int c)
{

	if (c > 96 && c < 123)
		c = 1;
	else
		c = 0;
	return (c);
}
