#include "holberton.h"

/**
 * _isupper - function that checks for a digit
 * @c: int c
 * Return: return is c
 */
int _isupper(int c)
{
	if (c > 64 && c < 91)
		c = 1;
	else
		c = 0;
	return (c);
}
