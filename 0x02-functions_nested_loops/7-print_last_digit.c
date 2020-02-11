#include "holberton.h"

/**
 *print_last_digit - print the last number
 * @a: int last number
 * Return: Always 0
 */

int print_last_digit(int a)
{
	a = a % 10;
	if (a < 0)
		a = a * -1;
	_putchar(a + '0');
	return (a);
}
