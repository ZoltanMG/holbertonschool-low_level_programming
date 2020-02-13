#include "holberton.h"

/**
 * _isdigit - function that checks for a digit
 * @c: int c
 * Return: return is c
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		c = 1;
	else
		c = 0;
	return (c);
}
