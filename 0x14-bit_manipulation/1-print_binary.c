#include "holberton.h"

/**
 * print_binary - function
 * @n: unsigned int
 */
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		putchar('0');
		return;
	}
	if (n > 1)
	{
		print_binary(n >> 1);
		putchar((n & 1) + '0');
	}
	else
		putchar('1');
}
