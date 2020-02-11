#include "holberton.h"

/**
 * print_sing - sings of numbers.
 * @n: the int to return.
 * Return: always 0.
 */
int print_sing(int n)
{
	if (n > 0)
	{
		n = 1;
		_putchar('+');
	}
	if else(n == 0)
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
