#include "holberton.h"

/**
 * _abs - absolute value
 * @a: int value
 * Return: Always 0
 */

int _abs(int a)
{
	if (a < 0)
		a = a * -1;
	return (a);
}
