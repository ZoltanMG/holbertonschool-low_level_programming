#include "holberton.h"

/**
 * print_sign - sings of numbers.
 * @n: the int to return.
 * Return: always 0.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		n = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		n = 0;
		_putchar('0');
	}
	else
	{
		n = -1;
		_putchar('-');
	}
	return (n);
}
