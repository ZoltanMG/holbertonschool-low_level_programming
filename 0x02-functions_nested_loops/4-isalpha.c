#include "holberton.h"

/**
 * _isalpha - check lowercaser
 * @c: the int to return
 * Return: 1 if c is lowercase
 */
int _isalpha(int c)
{

	if ((c > 96 && c < 123) || (c > 65 && c < 91))
		c = 1;
	else
		c = 0;
	return (c);
}
