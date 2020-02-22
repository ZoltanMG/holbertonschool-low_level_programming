#include "holberton.h"

/**
 * print_number - function
 * @n: int
 */
void print_number(int n)
{
	int a = n;

	if (a < 0)
	{
		_putchar('-');
		a = a * -1;
	}
	if ((a / 10) > 0)
	{
		print_number(a / 10);
	}
	_putchar((a % 10) + '0');
}
