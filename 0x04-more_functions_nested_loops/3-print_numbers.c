#include "holberton.h"

/**
 * print_numbers - print
 */
void print_numbers(void)
{
	char a;

	a = O;
	while (a <= 9)
	{
		_putchar(a + '0');
		a++;
	}
	_putchar('\n');
}
